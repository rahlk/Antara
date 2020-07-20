#include<stdio.h>
int main()
{
    int N;
    int temp,a=0,b=1;
    int x=0;
    scanf("%d",&N);
    temp=N;
    while(temp!=4)
    {
        temp=temp%10;
    }
    if(temp==4)
    { x++;
          while(a!=4 && b!=4 && (a+b)!=N)
        { 
            a=a+1;
        b=b+1;
        }
         printf(" Case #%d %d %d",x,a,b); 
      }
        
       // x++;
    //}
   // printf(" Case #%d %d %d",x,a,b);
    return 0;
}