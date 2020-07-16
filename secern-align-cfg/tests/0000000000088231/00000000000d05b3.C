#include<stdio.h>
void check(int n,int i,int temp){
int flag,p,j,q,k,remainder;
flag=0;
j=1;
while( n!=0 )
    {
        remainder = n%10;
        if(remainder==4)
        {   flag=1;
            j++;
            break;
         }
        n/= 10;
    }
     if(flag==1)
    {
        p=temp-j;
        k=temp-p;
    
    check(p,i,temp);
    }
    //if(flag==0)
    printf("Case #i: %d %d",p,q);
}
void main()
{int t,n,temp;
int i;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d",&n);
temp=n;
check(n,i,temp);
}
    
}
   
    
        