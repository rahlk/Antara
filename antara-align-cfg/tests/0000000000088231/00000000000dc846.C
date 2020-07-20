def Reverse(num):
    return num[::-1]

def Create(n):
    m=0
    place=1
    for i in n:
        if i=="4":
            m+=1*place
        place=place*10
    return m
    

for t in range(int(input())):
    
    original=input()
    num=Reverse(original)
    n=Create(num)

    print("Case #"+str(t+1)+": "+str(int(original)-n)+" "+str(n))


