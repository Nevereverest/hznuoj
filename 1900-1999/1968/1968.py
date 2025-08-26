n=int(input())
t=0
while n!=1:
    t+=1
    n=n/2 if n%2==0 else n*3+1
print(t)
