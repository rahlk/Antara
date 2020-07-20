#include<stdio.h>
int temp,n,j,t;
int j=1;
int i=1;
void check(int n){
int flag,p,q,k,remainder;
flag=0;

while( n!=0 )
    {
        remainder = n%10;
        if(remainder==4)
        {   flag=1;
            //j++;
            break;
         }
         else
        n/= 10;
    }
     if(flag==1)
    {   j++;
        p=temp-j;
        k=temp-p;
        
    check(p);
    check(k);
    }
    if(flag==0)
    while(i<=t)
    {printf("Case #%d: %d %d",i,p,q);
    i++;
    }
}
void main()
{
scanf("%d",&t);
scanf("%d",&n);
temp=n;
check(n);
}
   
    
        