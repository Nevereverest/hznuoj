while True:
    try:
        a=int(input(),2)
        b=int(input(),2)
        s=(bin(a+b)).replace('0b','')
        l=[]
        for i in range (len(s)):
            if(s[i]=='1'):
                l.append(len(s)-i)
        print(" ".join(str(i) for i in l))
    except:
        break