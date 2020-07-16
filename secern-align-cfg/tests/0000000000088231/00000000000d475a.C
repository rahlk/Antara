#include <stdio.h>
int temp,n,j,t,p,q;
int j=1;
int i=1;
void check(int n){
int flag,rem;
flag=0;

while( n!=0 )
    {
        rem = n%10;
        if(rem==4)
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
        q=temp-p;
        
    check(p);
    check(q);
    }
    if(flag==0)
    while(i<=t)
    {	
    	printf("Case #%d: %d %d \n",i,p,q);
    i++;
    }
}
void main()
{int p,q;
scanf("%d",&t);
scanf("%d",&n);
temp=n;
if(temp%2==0)
{p=temp/2;
q=p;
}
else
{p=temp-1;
q=temp-p;
}
check(p);
check(q);
}
   
    
