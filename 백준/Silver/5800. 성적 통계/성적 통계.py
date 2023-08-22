n=int(input())
for i in range(n):
    s=list(map(int,input().split()))
    k=int(s[0])
    del s[0]
    s.sort()
    t=[]
    for j in range(k-1):
        t.append(s[j+1]-s[j])
    t.sort()
    print('Class %d' %(i+1))
    print('Max %d, Min %d, Largest gap %d' %(s[-1],s[0],t[-1]))
