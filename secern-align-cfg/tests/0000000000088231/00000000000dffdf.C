#include<stdio.h>
int main()
{
    int i=1,j,n,num,k;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d",&num);
        for(j=1;j<num;j++)
        {
            if(j!=4)
            for(k=1;k<num;k++)
            {
                if(k!=4&&j+k==num)
                printf("Case #%d: %d %d\n",i,j,k);
                break;
            }
        }
        i++;
    }
    return 0;
}