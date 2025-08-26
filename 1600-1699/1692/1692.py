while True:
	try:
		s=input()
		x,y=0,0
		for i in range(len(s)-1):
			if s[i]=="-":
				y=y+1
			else:
				x+=int(s[i])*(i-y+1)
		if x%11 !=10:
			a=str(x%11)
		else:
			a="X"
		if a==s[len(s)-1]:
			print("Right")
		else:
			a=s[0:-1]+a
			print(a)
	except:
		break
