n=int(input())
l=list(map(int,input().split()))
print('%d %d %.1f'%(max(l),min(l),sum(l)/n))