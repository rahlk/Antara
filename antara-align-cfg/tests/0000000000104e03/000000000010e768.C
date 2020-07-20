#include<stdio.h>
int main()
{
    int t,i,j,k,l,r,c,e,m,order[100][100],flag;
    scanf("%d",&t);
    for(e=1;e<=t;e++)
    {
        scanf("%d%d",&r,&c);
        k=0;
        l=0;
        m=1;
        order[k][l]=m;
        while(m!=r*c){
        while(i!=r)
        {
            while(j!=c)
            {
               if((k-1!=i&&l-1!=j)&&(k-1!=i&&l!=j)&&(k-1!=i&&l+1!=j)&&(k!=i&&l-1!=j))
                {
                    if((k!=i&&l+1!=j)&&(k+1!=i&&l-1!=j)&&(k+1!=i&&l!=j)&&(k+1!=i&&l+1!=j))
                    {
                    k=i;
                    l=j;
                    m++;
                    order[k][l]=m;
                    i=0;
                    j=0;
                    }
                }
                j++;
            }
            i++;
            
        }
        }
        printf("Case #%d: ",e);
        if(m==r*c)
        {
            printf("POSSIBLE");
        }
        else
        {
            printf("IMPOSSIBLE");
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(order[i][j]>0)
                {
                    printf("\n");
                    printf("%d ",i);
                    printf("%d",j);
                }
            }
        }
        printf("\n");
    }
    return 0;
}