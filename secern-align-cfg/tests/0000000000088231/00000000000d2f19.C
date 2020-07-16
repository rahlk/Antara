#include<stdio.h>
int main()
{
    int N;
    int temp,a=1,b=0;
    int x=0;
    scanf("%d",&N);
    temp=N;
    while(temp!=4)
    {
        temp=temp%10;
    }
    if(temp==4)
    { x++;
          while((a+b)!=N)
        { 
            a=a+2;
        b=b+3;
        }
         printf(" Case #%d %d %d",x,a,b); 
      }
        
       // x++;
    //}
   // printf(" Case #%d %d %d",x,a,b);
    return 0;
}