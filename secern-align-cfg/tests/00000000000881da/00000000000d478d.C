#include<stdio.h>

int main ()
{
    int test,i,tem,mo;
    int No[100];
     int temp,minus,m=1;
    scanf ("%d",&test);
    if (test>=1 && test<=100)
    {
        for (i=0;i<test;i++)
        {
          scanf("%d",&No[i]);
        }
        for (i=0;i<test;i++)
        {
            while(No[i]!=0)
            {
             temp=No[i]/10;
             if(temp==4)
             {
               i++;

             }
             minus=minus+m;
             m=m*10;
            }
            if (No[i]==4)
            {
                printf ("case #%d: 2\t2\n",(i+1));
            }
            else
            {
            mo=No[i]-tem;
          printf ("case #%d: %d\t%d\n",(i+1),mo,tem);

            }
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

