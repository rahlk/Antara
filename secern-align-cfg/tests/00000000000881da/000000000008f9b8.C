#include<stdio.h>
#include<string.h>
int main()
{
int t,o;
scanf("%d", &t);
for(o=1;o<=t;o++)
{
    int n,i,j,l;
    char a[1000001],b[1000001];
    scanf("%d", &n);
    scanf("%s", &a);
    l=strlen(a);
    for(i=0;i<l;i++)
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