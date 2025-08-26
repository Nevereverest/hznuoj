for _ in range(int(input())):
    n=int(input())
    print(n//100+(n%100)//50+(n%50)//10+(n%10)//5+n%5)