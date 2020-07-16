#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int row,col;
}cell;
void gasit(int a[22][22],int rows,int colums,int *r1,int *c1)
{
    for(int i=1;i<=rows;i++)
    {
        if(*r1==i)
            continue;
        for(int j=1;j<=colums;j++)
        {
            if(*c1==j)
                continue;
            if(*r1+*c1==i+j)
                continue;
            if(*r1-*c1==i-j)
                continue;
            if(a[i][j]==1)
                continue;
            *r1=i;
            *c1=j;
            a[i][j]=1;
            return;
        }
    }
    *r1=-1;
    *c1=-1;
}
int check(int a[22][22],int rows,int colums)
{
    for(int i=1;i<=rows;i++)
        for(int j=1;j<=colums;j++)
            if(a[i][j]==0)
                return 0;
    return 1;
}
int main()
{
    int nr_T;
    scanf("%d",&nr_T);
    for(int q=1;q<=nr_T;q++)
    {
        int rows,colums,r1=1,c1=1,ok=1;
        scanf("%d %d",&rows,&colums);
        int a[22][22],x[421][2],nr=0;
        for(int i=1;i<=20;i++)
            for(int j=1;j<=20;j++)
                a[i][j]=0;
        while(check(a,rows,colums)==0)
        {
            gasit(a,rows,colums,&r1,&c1);
            if(r1==-1)
            {
                ok=0;
                break;
            }
            x[nr][0]=r1;
            x[nr][1]=c1;
            nr++;
        }
        if(ok==1)
        {
            printf("Case #%d: POSSIBLE\n",q);
            for(int i=0;i<nr;i++)
                printf("%d %d\n",x[i][0],x[i][1]);
        }
        else
            printf("Case #%d: IMPOSSIBLE\n",q);
    }
    return 0;
}
