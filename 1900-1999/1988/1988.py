while 1:
    try:
        a,b=input().split()
        s=""
        for i in range(min(len(a),len(b))):
            s=s+a[i]+b[i].lower()
        print(s)
    except:
        break
