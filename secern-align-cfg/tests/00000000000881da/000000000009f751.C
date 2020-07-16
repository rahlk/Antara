#include<stdio.h>
int main()
{
    int i,n,a,b,j;
    char m[100];


    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
       scanf("%d",&a);

        b=((a-1)*2);

        scanf("%s",m);

        for(j=0;j<b;j++)
        {
            if(m[j]==69)
            {
                m[j]=83;
            }
          else if(m[j]==83)
            {
                m[j]=69;
            }

        }
        printf("Case #%d : %s\n",i,m);

    }
    return 0;
}
