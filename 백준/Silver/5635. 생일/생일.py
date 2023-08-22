import sys
n=int(input())
set=[]
for i in range(n):
    s=sys.stdin.readline().split()
    s[1]=int(s[1])
    s[2]=int(s[2])
    s[3]=int(s[3])
    set.append(s)
M=0
m=0
for i in range(1,n-1):
    if set[i][3]>set[M][3]: M=i
    elif (set[i][3]==set[M][3]) & ((set[i][2]>set[M][2])) :M=i
    elif (set[i][3]==set[M][3]) & ((set[i][2]==set[M][2])) &((set[i][1]>set[M][1])) : M=i
for j in range(1,n-1):
    if set[j][3]<set[m][3]: m=j
    elif (set[j][3]==set[m][3]) & ((set[j][2]<set[m][2])) :m=j
    elif (set[j][3]==set[m][3]) & ((set[j][2]==set[m][2])) &((set[j][1]<set[m][1])) : m=j
print(set[M][0])
print(set[m][0])
