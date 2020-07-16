#include<stdio.h> 
//#include<conio.h>
int main()
{
    int n,m,s,t,b[20],c[20],x,i,j,y; 
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        scanf("%d",&n);
        x=0;
        y=0;
        m=n; 
        while(n!=0)
        { if(n%10!=4)
         b[x++]=n%10;
         else
         b[x++]=2;
         n/=10;
         
        }
s=0; 
        for(j=x-1;j>=0;j--)
        s=s*10+b[j];
        printf("\nCase #%d: %d %d",i+1,s,m-s);
       // return 0;
    } 
    return 0;
}
   