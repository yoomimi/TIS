n=int(input())
case=[]
for i in range(n):
    a=int(input())
    if a==0: del case[-1]
    else: case.append(a)
sum=0
for j in range(len(case)):
    sum+=case[j]
print(sum)
