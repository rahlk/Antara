#include<stdio.h>
struct n
{
    int N;
};
int ab(int x)
{
    int temp,i=0,j=0,flag=0,minus=0,m=1;
    while(x!=0)
    {
     temp=x%10;
     if(temp==4)
     {
       i++;


     }
     else if(j==0 && temp==5)
     {
         flag=1;
     }
     minus=minus+m;
     m=m*10;
     x=x/10;
    }
    if(i==0)
    {
        return 0;
    }
    if(flag==1)
    {
        return (minus+1);
    }
    else
    {
        return minus;
    }
}
int main ()
{
    int test,i,tem;
    struct n No[100];
    scanf ("%d",&test);
    if (test>=1 && test<=100)
    {
        for (i=0;i<test;i++)
        {
          scanf("%d",&No[i].N);
        }
        for (i=0;i<test;i++)
        {
             tem=ab(No[i].N);
            if(tem==0)
            {
                return 0;
            }
            else
            {


          printf ("Case #%d: %d\t%d\n",(i+1),(No[i].N-tem),(tem));

            }
        }
    }
    else
    {
        return 0;
    }
    return 0;
}
