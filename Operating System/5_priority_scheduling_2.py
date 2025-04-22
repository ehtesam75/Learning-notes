#priority scheduling (HIGHER value = higher priority)
#non preemptive

print("Priority scheduling (higher value = higher priority)")
n = int(input("Enter the number of process : "))

process = []

for i in range(n):
    key = "P" + str(i+1)
    at = int(input("Enter the arrival time of process P" + str(i+1) + ": "))
    bt = int(input("Enter the burst time of process P" + str(i+1) + ": "))
    priority = int(input("Enter the priority of process P" + str(i+1) + ": "))
    process.append((key, at, bt, priority))

time = 0
final = [] 

while process:
    available = [p for p in process if p[1] <= time]

    if available:
        next_process = max(available, key = lambda x : x[3])
        process.remove(next_process)
        key, at, bt, priority = next_process
        ct = time + bt
        tat = ct - at
        wt = tat - bt  
        final.append((key, at, bt, priority, ct, tat, wt))  
        time = ct 
    else:
        time += 1

final.sort(key = lambda x : x[0][1:])

print("\nProcess | Arrival | Burst | Priority | Completion | Turn around | Waiting")
print("-" * 75)

for row in final:
    print(
        f"{row[0]:<7} | {row[1]:<7} | {row[2]:<5} | {row[3]:<8} | {row[4]:<10} | {row[5]:<11} | {row[6]}"
    )

avg_wt = sum(row[6] for row in final) / n
print(f"\nAverage waiting time : {avg_wt : .2f}")