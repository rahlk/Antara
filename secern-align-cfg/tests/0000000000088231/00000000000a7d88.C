#include<stdio.h>
#include<stdlib.h>
int check(float a)
{
    int r=0;
    while(a>0)
    {
        r=(int)a%10;
        if(r==4)
        return 0;
        a=a/10;
        
        }
        return 1;
}

int main()
{
    int test;
    int i;
    int j;
    scanf("%d",&test);
    float a[test];
    for(i=0;i<test;i++)
    scanf("%f",&a[i]);
    i=0;
    float a2,b;
    
    Read:while(i<test)
    {
        a2=0;
        b=0;
        for(j=0;j=(int)a[i];j++)
        {
            a2=j;
            b=a[i]-j;
            if(check(a2) && check(b))
            {
                printf("case #%d: %.0f %.0f\n",a2,b);
                i++;
                goto Read;
        
            }
        }
        
    }
    return 0;
}
        
    }
}