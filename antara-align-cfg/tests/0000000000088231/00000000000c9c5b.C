#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>


    int func(int n)
    {



    int k,s,i,x,a,b;

    x=n;

    a=0;
    b=n;
    int no_digits=0;
    while(x!=0)
    {
        x=x/10;
        no_digits++;
    }
    x=n;
    for(i=0;i<no_digits;i++)
    {
        k=x%10;
        if(k==4)
        {

            {
                b=b-pow(10,i);
                a=n-b;


            }

        }
        x=x/10;
    }

    return a;

    }
int main()
{
    int s,l,u[200];
    scanf("%d",&s);
    for(l=1;l<=s;l++)
    {

       scanf("%d",&u[l]);

    }
    for(l=1;l<=s;l++)
    {
         printf("Case #%d:%d %d\n",l,func(u[l]),u[l]-func(u[l]));
    }
}

