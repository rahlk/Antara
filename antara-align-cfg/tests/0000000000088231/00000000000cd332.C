#include<stdio.h>
#include<stdlib.h>
int callme(int num);
int returnnumbers(int num,int x);
int main()
{
    int n,digit,num,x;
printf("enter the number ");
scanf("%d",&n);
x = n;
if(n>0)
    {
        while(n!=0)
        {
            digit=n%10;
            n=n/10;
            if(digit==4)
            {
                num = callme(num);
                returnnumbers(num,x);
            }
        }
    }
    return 0;
}

int callme(int num)
{  num = rand() % 5000 + 1;
   ///printf("%d\n", num);
   return num;
}
int returnnumbers(int num,int x)
{  int m;
    m = x-num;
    printf(" %d %d ",num,m);
    return 0;
}
