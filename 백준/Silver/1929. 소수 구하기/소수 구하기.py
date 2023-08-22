import sys

def prime_list(c,n):
    case=[True]*n
    m=int(n ** 0.5)
    for i in range(2,m+1):
        if case[i]==True:
            for j in range(i+i,n,i): 
                case[j]=False
    for i in range(1,c): case[i]=False
    return [i for i in range(2,n) if case[i]==True]

a,b=map(int,sys.stdin.readline().split())
print(*prime_list(a,b+1),sep='\n')
