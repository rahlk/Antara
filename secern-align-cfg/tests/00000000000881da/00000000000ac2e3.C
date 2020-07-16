#include<stdio.h>
#include<conio.h>
void main()
{
    int t,i,n,j;
    char a[10000];
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
         scanf("%d",&n);
        scanf("%s",&a);
        int r=1;
        for(i=0;i<2*n-2;i++)
        {
                for(k=i;k<r;k++)
                {
            if(a[i]=='E')
            {
            a[i]='S';
            }
            if(a[i]=='S')
            {
                a[i]='E';
            }
            }
                    //a[k]=a[i];
                    r++;
                    i++;
        }
        printf("Case #%d: %s\n",k,a);
    }
}
