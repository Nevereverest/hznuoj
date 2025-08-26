a,b=map(int,input().split())
print('*'*b+('\n'+('*'+' '*(b-2)+'*\n')*(a-2)+'*'*b)*(a>1))