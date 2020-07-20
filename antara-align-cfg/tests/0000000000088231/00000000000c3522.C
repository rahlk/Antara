i=1
flag=0
T=int(input())
while(i<=T):
    n=int(input())
    a=n-1;
    b=1;
    ar=br=0;
    while(1):
        ad=a
        bd=b
        ar=ad%10
        br=bd%10
        while(ad>0 or bd>0):
            if(ar==4 or br==4):
                flag=1;
                break;
            else:
                ad=ad//10;
                bd=bd//10;
                ar=ad%10;
                br=bd%10;
        if(flag==0):
            print('Case #%d:' %(i),a,b)
            break
        else:
            a=a-1
            b=b+1
        flag=0
    i=i+1
