/*def four(p):
    while(p>0):
        if(p%10==4):
            return False
        else:
            p=p/10;
    return True
t=int(input())
for i in range(0,t):
    n=int(input())
    for j in range(1,n):
        if(four(j) and four(n-j)):
            print('Case #',(i+1),': ',j,' ',(n-j))
            break*/
#include<stdio.h>
int four(int t)
{
    while(t>0)
    {
        if(t%10==4)
        {
            return 0;
        }
        else
            t=t/10;
        return 1;
    }
}
int main()
{
    int n,t,i,j;
    scanf(%d,&n);
    for(i=0;i<n;i++)
    {
        scanf(%d,t);
        for(j=1;j<t;j++)
        {
            if(four(j)&&four(n-j))
            {
                printf("Case #%d:\t%d\t%d",i,j,n-j);
            }
        }
        
    }
}