case=[]
t=[]
for i in range(8):
    n=int(input())
    case.append(n)
    t.append(n)
case.sort()
sum=0
p=[]
for j in range(5):
    sum+=case[j+3]
    for k in range(8):
        if case[j+3]==t[k]: p.append(k+1)
p.sort()
print(sum)
print(*p)
