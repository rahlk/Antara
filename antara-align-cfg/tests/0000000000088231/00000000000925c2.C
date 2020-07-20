#include<stdio.h>
struct n
{
    int N;
};
int main ()
{
    int test,i,temp;
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
        if (No[i].N==4)
        {
            printf ("case #%d: 2\t2\n",(i+1));
        }
        else
        {
      temp=No[i].N/2;
     
      printf ("case #%d: %d\t%d\n",(i+1),(temp+4),(temp-4));
    
        }
    }
    }
    else
    {
        return 0;
    }
    return 0;
}