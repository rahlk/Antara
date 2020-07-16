#include <stdio.h>
#include <stdlib.h>

int cmmdc(int a,int b)
{
    while(a*b!=0)
        if(a>b)
            a=a%b;
        else
            b=b%a;
    return a+b;
}
void inserare(int litere[26],int x,int *nr)
{
    for(int j=0;j<*nr;j++)
        if(litere[j]==x)
            return;
    int i=*nr-1;
    while(i>=0 && x<litere[i])
    {
        litere[i+1]=litere[i];
        i--;
    }
    litere[i+1]=x;
    (*nr)++;
}
int main()
{
    int nr_T;
    scanf("%d",&nr_T);
    for(int q=1;q<=nr_T;q++)
    {
        int n_max,lungime_sir,prim;
        scanf("%d %d",&n_max,&lungime_sir);

        int litere[26],v[101],nr_grup=0,nr_litere=0,n1=1;
        int produs1=0,produs2=0;
        scanf("%d",&produs1);
        produs2=produs1;
        while(produs1==produs2)
        {
            scanf("%d",&produs2);
            prim=cmmdc(produs1,produs2);
            v[nr_grup]=produs1/prim;
            v[nr_grup+1]=prim;
            v[nr_grup+2]=produs2/prim;
            litere[0]=prim;
            prim=v[nr_grup+2];
            inserare(litere,v[nr_grup],&n1);
            inserare(litere,v[nr_grup+2],&n1);
            n1=1;
            nr_grup++;
        }
        nr_litere=3;
        inserare(litere,produs1/v[nr_grup-1],&nr_litere);
        for(int i=nr_grup-1;i>=0;i--)
            v[i]=produs1/v[i+1];
        for(int j=nr_grup+1;j<lungime_sir;j++)
        {
            scanf("%d",&produs1);
            prim=produs1/prim;
            v[j+1]=prim;
            inserare(litere,prim,&nr_litere);
        }
        printf("Case #%d: ",q);
        for(int i=0;i<=lungime_sir;i++)
            for(int j=0;j<26;j++)
                if(v[i]==litere[j])
                {
                    printf("%c",'A'+j);
                    break;
                }
        printf("\n");
    }
    return 0;
}
