#include<stdio.h>

int main()
{
    int test;
    scanf("%d",&test);
    for(int k=0;k<test;k++)
    {
        int t;
        scanf("%d",&t);
        int a=0,b=0;
        int i=0;
        while(t!= 0)
        {
        if(t%10 < 1)
        {
            a+=0*pow(10,i);
            b+=0*pow(10,i);
            i++;
            t = (t - t%10)/10;
        }
        else if(t%10 == 1)
        {
            a+= 1*pow(10,i);
            b+= 0;
            i++;
            t = (t - t%10)/10;
        }
        else if(t%10 == 2)
        {
            a+= 1*pow(10,i);
            b+= 1*pow(10,i);
            i++;
            t = (t - t%10)/10;
        }
        else if(t%10 == 3)
        {
            a+= 1*pow(10,i);
            b+= 2*pow(10,i);
            i++;
            t = (t - t%10)/10;
        }
        else if(t%10 == 4)
        {
            a+= 2*pow(10,i);
            b+= 2*pow(10,i);
            i++;
            t = (t - t%10)/10;
        }
        else if(t%10 == 5)
        {
            a+= 3*pow(10,i);
            b+= 2*pow(10,i);
            i++;
            t = (t - t%10)/10;
        }
        else if(t%10 == 6)
        {
            a+= 3*pow(10,i);
            b+= 3*pow(10,i);
            i++;
            t = (t - t%10)/10;
        }
        else if(t%10 == 7)
        {
            a+= 2*pow(10,i);
            b+= 5*pow(10,i);
            i++;
            t = (t - t%10)/10;
        }
        else if(t%10 == 8)
        {
            a+= 5*pow(10,i);
            b+= 3*pow(10,i);
            i++;
            t = (t - t%10)/10;
        }
        else if(t%10 == 9)
        {
            a+= 6*pow(10,i);
            b+= 3*pow(10,i);
            i++;
            t = (t - t%10)/10;
        }
    }
        printf("Case #%d: %d %d\n",k,a,b);
    }
}