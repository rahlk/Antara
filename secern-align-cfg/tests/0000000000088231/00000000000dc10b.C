#include<stdio.h>
void jam(long int,long int);
int main()
{ 
int i,t,r;
long int n,q,b,a;
scanf("%d",&t);
for(i=0;i!=t;i++)
{
    scanf("%ld",&n);
    q=n;
    while(n>0)
    {
        r=n%10;
        if(r==4)
        break;
        n=n%10;
        
    }
    if(n==0)
    {
    continue;
    }
    a=1;
    b=q-1;
    jam(a,b);
}
return 0;
}
void jam(long int a,long int b)
{
    long int c,d;
    int r,t;
    c=a;
    d=b;
    while(b>0)
    { r=b%10;
    if(r==4)
    break;
    b=b/10;
    }
    while(a>0)
    {t=a%10;
    if(t==4)
    break;
    a=a/10;
    }
    if(b==0&&a==0)
    {
        printf("Case #1:%ld \n%ld",c,d);
        
    }
    else
    jam(c=c+2,d=d-2);
}
    
