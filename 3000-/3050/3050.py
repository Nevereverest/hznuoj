import itertools
n,k=map(int,input().split())
print(''.join(sorted((''.join(x)for x in itertools.permutations(input().split())),reverse=True)[k-1]))