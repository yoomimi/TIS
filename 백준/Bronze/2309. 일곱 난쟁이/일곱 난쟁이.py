nan=[]
k=0
for i in range(9):
    n=int(input())
    nan.append(n)
    k+=n
for i in range(9):
    for j in range(9):
        if nan[i]+nan[j]==k-100:
            a=i
            b=j
del nan[a]
del nan[b] 
nan.sort()
for i in range(7):
    print(nan[i])
