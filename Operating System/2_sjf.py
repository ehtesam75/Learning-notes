#sjf: shortest job first
#sort process by arrival time
#among available processes (those that have arrived by the current time), 
#choose the one with the shortest burst time

print("Shortest job first cpu scheduling algorithom")

n = int(input("Enter total number of process : "))
process = [] #a list of tuple

for i in range(n):
    key = "P" + str(i+1)
    at = int(input("Enter the arrival time of process P" + str(i+1) + ": "))
    bt = int(input("Enter the burst time of process P" + str(i+1) + ": "))
    process.append((key, at, bt))

time = 0 #keep tarcks of current cpu time
final = []

# while process:  #runs 'till it becomes empty
#     available = [p for p in process if p[1] <= time]    
#     #put those process in available, whose arrival time is less than current cpu time
#     if not available: #if theres no elemnet in available
#         #cpu idle
#         time = min(process, key = lambda x : x[1])[1] #fast forword to the next(lowest at) process 
#         #notice : there's a [1] in the end; 
#         # it means minimum_process[1]; arrival time of the process with minimum at
#         continue  #goes to the top of the while loop

#     next_process = min(available, key = lambda x : x[2]) #select the process with shortest bt
#     process.remove(next_process)

#     pid = next_process[0]
#     at = next_process[1]
#     bt = next_process[2]
#     ct = time + bt  #start time = time
#     tat = ct - at
#     wt = tat - bt
#     final.append((pid, at, bt, ct, tat, wt))

#     time = ct



#ALTERNATIVE APPROCH (EASIER but SLOWER)
while process:  #runs 'till it becomes empty
    available = [p for p in process if p[1] <= time]    
    #put those process in available, whose arrival time is less than current cpu time

    if available:
        next_process = min(available, key = lambda x : x[2]) #select the process with shortest bt
        process.remove(next_process)

        pid = next_process[0]
        at = next_process[1]
        bt = next_process[2]
        ct = time + bt  #start time = time
        tat = ct - at
        wt = tat - bt
        final.append((pid, at, bt, ct, tat, wt))

        time = ct
    
    else:
        time += 1
        #this can be inefficient if there are large gaps between arrival times
        #to solve this use the commented version


final = sorted(final, key = lambda x : x[0][1:])

print("\nProcess | Arrival | Burst | Completion | Turn around | Waiting")
print("-" * 65)

for row in final:
    print(
        f"{row[0]:<7} | {row[1]:<7} | {row[2]:<5} | {row[3]:<10} | {row[4]:<11} | {row[5]:<7}"
    )

avg_wt = sum(row[5] for row in final) / n
print(f"\nAverage waiting time : {avg_wt : .2f}")


