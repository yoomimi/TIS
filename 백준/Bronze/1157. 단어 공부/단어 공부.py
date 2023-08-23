string = input()
check = [0]*26
for i in range(len(string)):
    if (string[i] == 'a' or string[i] =='A'):
        check[0] = check[0] + 1
    elif (string[i] == 'b' or string[i] =='B'):
        check[1] = check[1] + 1
    elif (string[i] == 'c' or string[i] =='C'):
        check[2] = check[2] + 1
    elif (string[i] == 'd' or string[i] =='D'):
        check[3] = check[3] + 1
    elif (string[i] == 'e' or string[i] =='E'):
        check[4] = check[4] + 1
    elif (string[i] == 'f' or string[i] =='F'):
        check[5] = check[5] + 1
    elif (string[i] == 'g' or string[i] =='G'):
        check[6] = check[6] + 1
    elif (string[i] == 'h' or string[i] =='H'):
        check[7] = check[7] + 1
    elif (string[i] == 'i' or string[i] =='I'):
        check[8] = check[8] + 1
    elif (string[i] == 'j' or string[i] =='J'):
        check[9] = check[9] + 1
    elif (string[i] == 'k' or string[i] =='K'):
        check[10] = check[10] + 1
    elif (string[i] == 'l' or string[i] =='L'):
        check[11] = check[11] + 1
    elif (string[i] == 'm' or string[i] =='M'):
        check[12] = check[12] + 1
    elif (string[i] == 'n' or string[i] =='N'):
        check[13] = check[13] + 1
    elif (string[i] == 'o' or string[i] =='O'):
        check[14] = check[14] + 1
    elif (string[i] == 'p' or string[i] =='P'):
        check[15] = check[15] + 1
    elif (string[i] == 'q' or string[i] =='Q'):
        check[16] = check[16] + 1
    elif (string[i] == 'r' or string[i] =='R'):
        check[17] = check[17] + 1
    elif (string[i] == 's' or string[i] =='S'):
        check[18] = check[18] + 1
    elif (string[i] == 't' or string[i] =='T'):
        check[19] = check[19] + 1
    elif (string[i] == 'u' or string[i] =='U'):
        check[20] = check[20] + 1
    elif (string[i] == 'v' or string[i] =='V'):
        check[21] = check[21] + 1
    elif (string[i] == 'w' or string[i] =='W'):
        check[22] = check[22] + 1
    elif (string[i] == 'x' or string[i] =='X'):
        check[23] = check[23] + 1
    elif (string[i] == 'y' or string[i] =='Y'):
        check[24] = check[24] + 1
    elif (string[i] == 'z' or string[i] =='Z'):
        check[25] = check[25] + 1

a = list(filter(lambda e:check[e] == max(check), range(len(check))))
if len(a) == 1 : print(chr(a[0]+65))
else: print('?')