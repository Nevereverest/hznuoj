for i in range(int(input())):
	row,col,k=list(map(int,input().split()))
	l=[[0 for i in range(col)] for i in range(row)]
	for j in range(row):
		l[j]=list(map(int,input().split()))
	lz=l
	for n in range(k):
		lz=[[0 for j in range(len(l))] for j in range(len(l[0]))]
		for i in range(len(lz)):
			for j in range(len(lz[0])):
				lz[i][j]=l[len(lz[0])-j-1][i]
		l=lz
	for i in range(len(lz)):
		for j in range(len(lz[0])):
			print(lz[i][j],end=" ")
		print ("")
	print("")