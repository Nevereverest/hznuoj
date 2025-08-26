for _ in range(int(input())):
    a=input()
    s=a.replace('print ','print(')
    if s!=a:s=s+')'
    print(s)