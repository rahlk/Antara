#include<stdio.h>
#include<string.h>
int main()
{
    int n=0,i,j,k=0,m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int d,l;
        scanf("%d",&d);
        int a[d][d];
        char s[20];
        scanf("%s",&s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(c[i]='E')
            {
                m++;
                a[m][k]=1;
            }
            else
            {
                k++;
                a[m][k]=1;
            }
        }
        k=0,m=1;
	printf("Case #%d: ",j);
        for(i=0;i<l;i++)
        {
            if(a[m][k]!=1)
            {
                printf("E");
                m++;
            }
            else
            {
                m--;
                k++;
                printf("S");
            }
        }
    }
}
