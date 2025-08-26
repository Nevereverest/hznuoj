def p(n,a,b,c):
	if n==1:
		print(a+'->'+c)
	else:
		p(n-1,a,c,b)
		print(a+'->'+c)
		p(n-1,b,a,c)
p(int(input()),'a','b','c')
