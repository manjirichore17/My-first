# Simple FCFS Scheduling

process = ["P1", "P2", "P3"]
arrival = [0, 1, 2]
burst = [5, 3, 8]

n = len(process)
time = 0
ct = [0]*n
tat = [0]*n
wt = [0]*n
rt = [0]*n

print("PID  AT  BT  CT  TAT  WT  RT")

for i in range(n):
    if time < arrival[i]:
        time = arrival[i]

    rt[i] = time - arrival[i]
    time += burst[i]
    ct[i] = time

    tat[i] = ct[i] - arrival[i]
    wt[i] = tat[i] - burst[i]

    print(process[i], arrival[i], burst[i], ct[i], tat[i], wt[i], rt[i])

cpu_utilization = (sum(burst) / time) * 100
print("\nCPU Utilization =", cpu_utilization, "%")