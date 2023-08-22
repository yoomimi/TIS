n=int(input())
if n%5==0: print(int(n/5))
elif (n%5)==1:
    print(int((n-6)/5)+2)
elif (n%5)==2:
    if n==7: print(-1)
    else: print(int((n-12)/5)+4)
elif (n%5)==3: print(int(n/5)+1)
elif (n%5)==4:
    if n==4: print(-1)
    else: print(int((n-9)/5)+3)
