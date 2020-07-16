#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,i3=1,ctr;
    scanf("%d",&t);
    while(t--)
    {
        char n[100],n1[100];
        scanf("%d",n);
        int c=0;
        for(i=0;i<strlen(n);i++)
        {
            if(n[i]=='4')
            {
                n[i]='3';
                n1[i]='1';
                if(c==0)
                ctr=i;
                c++;
            }
            else
            n1[i]='0';
        }
        printf("Case #%d: %s",i3++,n);
        int i2;
        for(i2=ctr;i2<strlen(n);i2++)
        {
            printf("%c",n1[i2]);
        }
        printf("\n");
    }
}