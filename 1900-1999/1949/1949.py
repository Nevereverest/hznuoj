while True:
	try:
		a=list(map(int,input().split()))
		print(sum(i for i in a[1:a[0]+1] if i%2!=0))
	except:
		break
