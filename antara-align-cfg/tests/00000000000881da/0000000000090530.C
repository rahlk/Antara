#include<stdio.h>

int main()
{
int t,o;
scanf("%d", &t);
for(o=1;o<=t;o++)
{
    int n,i,j;
    char a[1000001],b[1000001];
    scanf("%d", &n);
    scanf("%s", &a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='S')
        {
            b[i]='E';
        }
        else
        {
            b[i]='S';
        }
    }
    printf("Case #%d: %s\n",o, b);
}
return 0;
}