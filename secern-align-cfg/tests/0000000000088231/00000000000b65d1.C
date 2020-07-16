#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        char n[101],a[101]="\0",b[101]="\0";
        int k=0;
        scanf("%s",n);
        l=strlen(n);
        for(i=0;i<l;i++)
        {
            if(n[i]=='4')
            {
                a[i]='3';
                b[k++]='1';
            }
            else if(k!=0)
            {
                a[i]=n[i];
                b[k++]='0';
            }
            else if(k==0)
                a[i]=n[i];
        }
        printf("Case #%d: %s %s\n",j,a,b);
    }
    return 0;
}
