import math
x,y=map(int,input().split())
print(math.comb(x+y-1,x)%(10**9+7))