#include<stdio.h>
#include<string.h>
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        int l=strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]=='S')
                a[i]='E';
            else a[i]='S';
        }
        printf("%s\n",a);
    }
}