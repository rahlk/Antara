#include<stdio.h>
int main()
{
    int A,B,T,N,C,D,NO1=0,NO2=0,count;
    printf("Enter test case number : \n");
    scanf("%d",&T);
    for(C=1;c<=T;C++)
    {
        printf("Enter Number ");
        scanf("%d",&N);
        while(n != 0)
       {
           N /= 10;
           ++count;
       }
       A=N;
       for(D=1;D<=count;D++)
       {
           if(N%10=4)
           {
               A=A--;
               B=B++;
               N=N/10;
           }
           else 
           {
           }
       }printf("Case #%d %d  %d",C,A,B);
       
    }
}