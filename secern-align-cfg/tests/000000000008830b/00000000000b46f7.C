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
    for(int i=0;i<26;i++)
        if(litere[i]==x)
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
        int n_max,lungime_sir;
        scanf("%d %d",&n_max,&lungime_sir);
        int produs1,produs2;
        scanf("%d",&produs1);
        scanf("%d",&produs2);
        int prim=cmmdc(produs1,produs2);
        int litere[26]={0},v[101],nr=1;
        v[0]=produs1/prim;
        v[1]=prim;
        v[2]=produs2/prim;
        litere[0]=prim;
        prim=v[2];
        inserare(litere,v[0],&nr);
        inserare(litere,v[2],&nr);
        for(int j=2;j<lungime_sir;j++)
        {
            scanf("%d",&produs1);
            prim=produs1/prim;
            v[j+1]=prim;
            inserare(litere,prim,&nr);
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
