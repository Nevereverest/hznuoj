while True:
	try:
		n=int(input())
		if n==0:break
		a=input().split()
		b=[]
		for n in a:
			n=list(n)
			n.sort()
			n="".join(n)
			b.append(n)
		c=[]
		for i in range(len(a)):    
			if b.count(b[i]) == 1:
				c.append(int(a[i]))
		if len(c)==0:print("None")
		else:
			c.sort()
			for n in c:
				print(n,end=" ")
			print("")
	except:
		break
