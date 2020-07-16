#include<stdio.h>
void main()
{int n[100],t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    scanf("%d",&n[i]);
    for(j=0;j<t;j++)
    {
     if(n[j]%4==0)
     {printf("Case #%d: %d 1",j+1,n[j]-1);
     }
     else
      printf(" ");
     
    }
    
    
}