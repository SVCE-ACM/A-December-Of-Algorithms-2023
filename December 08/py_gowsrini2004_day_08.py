print("py_gowsrini2004_day_08\n")
def find_path(n):
	matrix = [[0 for x in range(n)]for y in range(n)]#refered geeks for geeks
	i = n // 2
	j = n - 1
	k = 1
	while k <= (n * n):
		if i == -1 and j == n: 
			j = n - 2
			i = 0
		else:
			if j == n:
				j = 0
			if i < 0:
				i = n - 1
		if matrix[i][j]: 
			j = j - 2
			i = i + 1
			continue
		else:
			matrix[i][j] = k
			k = k + 1
		j = j + 1
		i = i - 1 
	for i in range(0, n):
		for j in range(0, n):
			print(matrix[i][j]," ",end='')
			if j == n - 1:
				print()
n = int(input(": "))
find_path(n)
