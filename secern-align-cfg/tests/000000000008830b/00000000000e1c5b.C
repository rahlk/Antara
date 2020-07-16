#include <stdio.h>
#include <stdlib.h>

int prim(int produs)
{
    int d=2;
    if(produs%d==0)
        return d;
    d=3;
    while(1)
    {
        if(produs%d==0)
            return d;
        d=d+2;
    }
}
void inserare_litere(int vector_litere[27],int litera,int *numar_litere)
{
    for(int i=0;i<*numar_litere;i++)
        if(vector_litere[i]==litera)
            return;
    int i=*numar_litere-1;
    while(litera<vector_litere[i] && i>=0)
    {
        vector_litere[i+1]=vector_litere[i];
        i--;
    }
    vector_litere[i+1]=litera;
    *numar_litere=*numar_litere+1;
}
int main()
{
    int nr_T;
    scanf("%d",&nr_T);
    for(int q=1;q<=nr_T;q++)
    {
        int n,l,produs;
        int vector_ordine_litere[101],vector_litere[27],numar_ord_litere=0,numar_litere=0;
        scanf("%d %d",&n,&l);
        scanf("%d",&produs);
        int prim1=prim(produs);
        int prim2=produs/prim1;
        for(int i=1;i<l;i++)
        {
            inserare_litere(vector_litere,prim1,&numar_litere);
            inserare_litere(vector_litere,prim2,&numar_litere);
            scanf("%d",&produs);
            if(produs%prim1==0)
            {
                vector_ordine_litere[numar_ord_litere]=prim2;
                numar_ord_litere++;
                prim2=produs/prim1;
                if(i==l-1)
                {
                    vector_ordine_litere[numar_ord_litere]=prim1;
                    numar_ord_litere++;
                    inserare_litere(vector_litere,prim2,&numar_litere);
                    vector_ordine_litere[numar_ord_litere]=prim2;
                    numar_ord_litere++;
                }
            }
            else
            {
                vector_ordine_litere[numar_ord_litere]=prim1;
                numar_ord_litere++;
                prim1=produs/prim2;
                if(i==l-1)
                {
                    vector_ordine_litere[numar_ord_litere]=prim2;
                    numar_ord_litere++;
                    inserare_litere(vector_litere,prim1,&numar_litere);
                    vector_ordine_litere[numar_ord_litere]=prim1;
                    numar_ord_litere++;
                }
            }
        }
        printf("Case #%d: ",q);
        for(int i=0;i<numar_ord_litere;i++)
            for(int j=0;j<numar_litere;j++)
                if(vector_ordine_litere[i]==vector_litere[j])
                    printf("%c",'A'+j);
        printf("\n");
    }
    return 0;
}
