#include<stdio.h>
#include<stdlib.h> 
#include<Math.h>
void main()
{
    int T,N,Num1,Num2,c;
    scanf("%d%d",&T,&N);
    c=checkForFour(N);
    
    if(c != 0)
    {
        Num1=rand()%N+1;
        Num2=N-Num1;
        c=checkForFour(Num1);
        if(c != 0)
        {
            Num1=c;
            Num2=N-Num1;
        }
        c=checkForFour(Num2);
        if(c != 0)
        {
            Num2=c;
            Num1=N-Num2;
            c=checkForFour(Num1);
             if(c != 0)
             {
                 Num1=c;
                 Num2=N-Num1;
             }
            
        }
        
    }
}
int checkForFour(int N)
{
    int m=N,rem=0,count=0,c=0,Result=0;
    while(m!=0)
    {
        c++;
        rem=m/10;
        if(rem==4)
        {
        count++;
        N=N+Pow(10,c);
        }
        m=m%10;
    }
    if(count>0)
    return N;
    else
    return 0;
}