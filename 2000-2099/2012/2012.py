def main():
    import sys
    data = sys.stdin.read().split()
    n = int(data[0])
    x = int(data[1])
    a_list = list(map(int, data[2:2+n]))
    b_list = list(map(int, data[2+n:2+2*n]))
    
    snacks = []
    for i in range(n):
        snacks.append((a_list[i], b_list[i]))
        
    snacks.sort(key=lambda x: x[0])
    
    count = 0
    money = x
    for price, supply in snacks:
        num = min(supply, money // price)
        count += num
        money -= num * price
        if money <= 0:
            break
            
    print(count)

if __name__ == "__main__":
    main()