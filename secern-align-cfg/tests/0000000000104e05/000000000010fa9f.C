t=int(input())
for q in range(1,t+1):
    n=int(input())
    flag=0
    x=input()
    x_1=x[-1]
    for i in range(n-1):
        x=input()
        x_2=x[-1]
        if(x_2==x_1):
            flag=1
        else:
            flag=0
        x_1=x_2
    if(flag==1):
        print('Case #{0}: {1}'.format(q,n))
    else:
        print('Case #{0}: 0'.format(q))