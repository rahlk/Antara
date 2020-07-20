def search(a,b):
    flag1=0
    flag2=0
    while(a>0):
        a1=a%10
        if(a1==4):
            flag1=1
        a=a/10
    while(b>0):
        b1=b%10
        if(b1==4):
          flag2=1
        b=b/10
    if((flag1==0) and(flag2==0)):
        return 1
    else:
        return 0
T=input()
l=[]
for i in range(1,int(T)+1):
    l.append(int(input()))
k=0
while(k<len(l)):
    for j in range(1,int(l[k])):
        p=search(j,int(l[k])-j)
        if(p==1):
            print( j ,int (l[k]-j))
            break
                   
    k=k+1
