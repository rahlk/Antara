#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,Q,P,**grid=NULL,max,i,j,k,xi,yi,h,l;
    char di;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&P);
        scanf("%d",&Q);
        grid=(int**)calloc(Q+1,sizeof(int*));
        for(k=0;k<Q+1;k++)
            grid[k]=(int*)calloc(Q+1,sizeof(int));
        for(j=0;j<P;j++)
        {
            scanf("%d %d %c",&xi,&yi,&di);
            switch(di)
            {
                case 'N':
                    for(h=0;h<Q+1;h++)
                        for(l=yi+1;l<Q+1;l++)
                            grid[h][l]++;
                    break;
                case 'S':
                    for(h=0;h<Q+1;h++)
                        for(l=yi-1;l>-1;l--)
                            grid[h][l]++;
                    break;
                case 'W':
                    for(h=xi-1;h>-1;h--)
                        for(l=0;l<Q+1;l++)
                            grid[h][l]++;
                    break;
                case 'E':
                    for(h=xi+1;h<Q+1;h++)
                        for(l=0;l<Q+1;l++)
                          grid[h][l]++;
                    break;
            }
        }
        max=0;
        for(h=0;h<Q+1;h++)
            for(l=0;l<Q+1;l++)
                if(grid[h][l]>max)
                    max=grid[h][l];
        for(h=0;h<Q+1;h++)
            for(l=0;l<Q+1;l++)
                if(grid[h][l]==max)
                {
                    printf("Case #%d: %d %d",i+1,h,l);
                    if(i!=T-1)
                        printf("\n");
                    h=l=Q;
                }
    }
}