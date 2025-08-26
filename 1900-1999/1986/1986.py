import sys
for l in sys.stdin:
    s=l.split()
    print(s[1][:int(s[2])]+s[0]+s[1][int(s[2]):])
