n, m = map(int, input().split())
print(f"{(4*n-m)//2} {n-(4*n-m)//2}" if (4*n-m)%2==0 and 0<=(4*n-m)<=2*n else "No answer")