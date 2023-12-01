n = int(input())
runs = [int(i) for i in input().split()]
maxi, t_runs = 0, 0
for k in range(n):
  if runs[k] > runs[maxi]:
    maxi = k
  t_runs += runs[k]
print(t_runs)
print(maxi)
