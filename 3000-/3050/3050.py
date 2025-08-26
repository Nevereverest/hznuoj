import itertools
_, n = map(int, input().split())
print(''.join(map(str, next(itertools.islice(itertools.permutations(sorted(map(int, input().split()), reverse=True)), n-1, n)))))