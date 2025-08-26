import sys
def j(n):
    if(n==0):
        sys.exit()
    if(n%17==0):
        print(1)
    else:
        print(0)
for line in sys.stdin:
    n=line.split()
    j(int(n[0]))