x = int(input())
for i in range(0,x):
    n = int(input())
    n1 = list(str(n))
    a1 = []
    b1 = []
    for j in range(0,len(n1)):
        n1[j] = int(n1[j])
        if n1[j] == 4:
            a1.append(2)
            b1.append(2)
        else:
            a1.append(n1[j])
            b1.append(0)
        a = int("".join(map(str,a1)))
        b = int("".join(map(str,b1)))
        
    print("Case #{0}:".format(i+1),a,b)