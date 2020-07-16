#include<stdio.h>
int main()
{
    int N;
    int temp,a=1,b=1;
    int x;
    scanf("%d",&N);
    temp=N;
    /*while(temp!=4)
    {
        temp=temp%10;
    }
    if(temp==4)
    {*/
    for(x=1;x<=N;x++)
      {
          while(temp!=4 && (a+b)!=N)
        { 
            a++;
        b++;
        temp=temp%10;
        }
         printf(" Case #%d %d %d",x,a,b); 
      }
        
       // x++;
    //}
   // printf(" Case #%d %d %d",x,a,b);
    return 0;
}