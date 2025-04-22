
"""

fcfs
non premtive scheduling algorithm (once a process starts executing on the CPU, it cannot be interrupted until it finishes)
processes are executed in the order they arrive (arrival time)

in this:

at = arrival time
bt = brust time
tat = turn over time
wt = waiting time

"""


print("First come first serve scheduling")
n = int(input("Enter number of process :"))

d = dict()

for i in range(n):
    key = "P" + str(i+1)
    at = int(input("Enter arrival time for process P" + str(i+1) + ": "))
    bt = int(input("Enter burst time for process P" + str(i+1) + ": "))
    l = []
    l.append(at)
    l.append(bt)
    d[key] = l

# d = [
#     ('P1', [arrival1, burst1]),
#     ('P2', [arrival2, burst2]),
#     ...
# ]

# d[0] is the first process after sorting
# d[0][0] is the process name ('P1')
# d[0][1] is the list [arrival_time, burst_time]
# d[0][1][0] is the arrival time
# d[0][1][1] is the burst time

d = sorted(d.items(), key= lambda x : x[1][0]) #sorted with arrival 
#afer this line d becomes a list of tuple, sorted by at
#d.items() makes gives tuple view

# here x is each element in d, which is a tuple: ('P1', [arrival, burst])
# So x[1] is [arrival, burst] 
# And x[1][0] is the arrival time

ct = [] #completion time

for i in range(n):
    if i == 0:  #for first process
        ct.append(d[i][1][0] + d[i][1][1])  #ct = at + bt 
    elif d[i][1][0] > ct[i-1]:  ## cpu was idle, wait for process to arrive
        ct.append(d[i][1][0] + d[i][1][1])  
    else:
        ct.append(ct[i-1] + d[i][1][1])  #previous Process ct + current bt


tat = []  #turn around time = ct - at
for i in range(n):
    tat.append(ct[i] - d[i][1][0])


wt = []  #waiting time = tat - bt
for i in range(n):
    wt.append(tat[i] - d[i][1][1])


#avg waiting time
res = 0

for val in wt:
    res += val

res /= n


#sorting 'd' according to process id

final = []
for i in range(n):
    final.append((d[i][0], d[i][1][0], d[i][1][1], ct[i], tat[i], wt[i]))

final = sorted(final, key = lambda x : int(x[0][1:]))
# x[0] is "P3", "P1", etc.
# x[0][1:] takes the number part → "3", "1"...
# int(...) co

print("\nProcess | Arrival | Brust | Completion | Turn around | Waiting")
print("-" * 65)

for row in final:
    print(
        f"{row[0]:<7} | {row[1]:<7} | {row[2]:<5} | {row[3]:<10} | {row[4]:<11} | {row[5]:<7}"
    )

print(f"\nAverage waiting time : {res:.2f}")