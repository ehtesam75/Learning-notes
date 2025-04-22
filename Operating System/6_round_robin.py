#round robin
#from chtgpt
# Time quantum is fixed (entered by user).
# All processes are added to a queue when they arrive.
# The CPU picks processes in FIFO order from the ready queue.
# It's preemptive, so a process may be put back into the queue if it’s not finished.

from collections import deque  #for usign deque

print("Round robin cpu scheduling algorithm : ")
n = int(input("Enter the number of process : "))
time_quantum = int(input("Enter the value of time quantum : "))

process = []

for i in range(n):
    key = "P" + str(i+1)
    at = int(input("Enter the arrival time of process P" + str(i+1) + ": "))
    bt = int(input("Enter the burst time of process P" + str(i+1) + ": "))
    process.append((key, at, bt, bt))   #[key, arrival, burst, remaning brust]

process.sort(key = lambda x : x[1])

time = 0
final = [] 

queue = deque()
i = 0

while i < n or queue:
    while i < n and process[i][1] <= time:
        queue.append(process[i])
        i += 1
    
    if queue:
        curr = queue.popleft()
        key, at, bt, rbt = curr
        execu_time = min(time_quantum, rbt)
        time += execu_time
        rbt -= execu_time

        while i < n and process[i][1] <= time:  
            #check for newly arrived processes during execution
            queue.append(process[i])
            i += 1

        if rbt > 0: #if the process isn't finished, re add to queue
            queue.append((key, at, bt, rbt))
        else:
            #if finished, calculate and append to final
            ct = time
            tat = ct - at
            wt = tat - bt
            final.append((key, at, bt, ct, tat, wt))
    
    else:
        time += 1


final = sorted(final, key = lambda x : x[0][1:])

print("\nProcess | Arrival | Burst | Completion | Turn around | Waiting")
print("-" * 65)

for row in final:
    print(
        f"{row[0]:<7} | {row[1]:<7} | {row[2]:<5} | {row[3]:<10} | {row[4]:<11} | {row[5]:<7}"
    )

avg_wt = sum(row[5] for row in final) / n
print(f"\nAverage waiting time : {avg_wt : .2f}")

