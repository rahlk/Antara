#include <conio.h>
#include <stdio.h>
int hasfour(int x)
{
       while(x!=0)
       {
            if(x%10==4)
                return 0;
            x=x/10;
       }
    return 1;
}
int main()
{
    int t;
    scanf("%d\n",&t);
    int in[t];
    int i=0,j;
    int a[t],b[t];
    while(i<t)
    {
        scanf("%d",&in[i]);
        i++;
    }
    i=0;
    while(i<t)
    {
        for(j=0;j<in[i];j++)
        {
            if(hasfour(j) && hasfour(in[i]-j))
            {
                a[i]=j;
                b[i]=in[i]-j;
            }
        }
        i++;
    }
    i=0;
    while(i<t)
    {
        printf("\nCase #%d: %d %d",(i+1),a[i],b[i]);
        i++;
    }
    return 0;
}