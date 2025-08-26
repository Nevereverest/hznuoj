m,n=map(int,input().split())
for i in range(m,n+1):
	t=0
	for j in range(2,i):
		if i%j==0:t=1
	if t==0:print(i)