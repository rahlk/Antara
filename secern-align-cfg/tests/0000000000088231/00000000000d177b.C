#include<stdio.h>
int temp,n,j;
int j=1;
void check(int n,int i){
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
        
    check(p,i);
    check(k,i);
    }
    if(flag==0)
    printf("Case #i: %d %d",p,q);
}
void main()
{int t;
int i;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d",&n);
temp=n;
check(n,i);
}
    
}
   
    
        