import itertools
for _ in range(int(input())):
    print(' '.join(sorted([''.join(p) for p in itertools.permutations(input())])))
