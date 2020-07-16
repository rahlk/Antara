#include <stdio.h>
#include <stdlib.h>

int maxim_pos (int v[],int pos1,int pos2)
{
    int aux=v[pos1];
    for(int i=pos1; i<=pos2; i++)
        if(aux<v[i])
            aux=v[i];
    return aux;
}

long long int calcul(int n,int c[],int d[],int k)
{
    int x,y;
    long long int nr=0;
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++)
        {
            x=maxim_pos(c,i,j);
            y=maxim_pos(d,i,j);
            if(x-y<0)
            {
                if(y-x<=k)
                    nr++;
            }
            else
            {
                if(x-y<=k)
                    nr++;

            }
        }

        return nr;
}

int main()
{
    int n,t,k,i,j,nr=1;
    int c[100001],d[100001];
    long long int afis[101];
    scanf("%d",&t);
    while(t!=0)
    {
        scanf("%d %d",&n,&k);
        for(int i=0; i<n; i++)
            scanf("%d",&c[i]);
        for(int i=0; i<n; i++)
            scanf("%d",&d[i]);
        afis[nr-1]=calcul(n,c,d,k);
        nr++;
        t--;

    }
    for(int i=0;i<nr-1;i++)
        printf("Case #%d: %d\n",i+1,afis[i]);
}
