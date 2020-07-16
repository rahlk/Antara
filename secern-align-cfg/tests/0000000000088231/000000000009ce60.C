#include <stdio.h>
#include <math.h>
#copyrighted Sayan Karmakar
int check(int a,int b)
{
    int ct=0;
    int x=a;
    while(x>0)
    {
        ct+=1;
        if(x%10==4)
        {
            b=a+b;
            a=a+pow(10,ct-1);
            b=b-a;
        }
            
        x=(x/10);
    }
    return a;
}

void main()
{
    int t;
    scanf("%d", &t);
    int i;
    for (i=1; i<=t; i++)
    {
        int n;
        scanf("%d", &n);
        int a=(n/2);
        int b=n-a;
        int s= check(a,b);
        int p= n-s;
        printf("\nCase %d: %d %d", i,s,p);
    }
}
    