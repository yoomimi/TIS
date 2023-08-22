s=input()
case=[]
for i in range(len(s)):
    case.append(int(s[i]))
case.sort(reverse=True)
print(*case, sep='')
