#include<stdio.h>
int main()
{
    int T,i,fact,j;;
    int N[10],L[10],p[100],in[10][100],q[100];
    char c[30],s='A';
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&N[i],&L[i]);
        for(int j=0;j<L[i];j++)
        {
            scanf("%d",in[i][j])
        }
    }
    for(int u=0;u<T;u++)
    {
    if(N[u]<105)
    {
    for(i=1; i<=N; i++)
    {
        fact=0;
        for(j=1; j<=N; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            p[i-1]=i;
    }
    for(i=0;i<26;i++)
    {
        c[i]=s+i;
    }
    for(int v=0;v<31;v++)
    {
    for(i=0;i<30;i++)
    {
        for(int j=i+1;j<31;j++)
        {
            if(p[i]*p[j]==in[0][v])
            {
                printf("%c",c[i]);
            }
        }
    }
        
    }}
    else
    {
        q[0]=2;
        q[1]=89;
        q[2]=109;
        q[3]=211;
        q[4]=239;
        q[5]=353;
        q[6]=479;
        q[7]=601;
        q[8]=701;
        q[9]=827;
        q[10]=883;
        q[11]=1021;
        q[12]=1051;
        q[13]=1087;
        q[14]=1277;
        q[15]=1381;
        q[16]=1531;
        q[17]=1571;
        q[18]=1669;
        q[19]=1861;
        q[22]=2137;
        q[20]=1973;
        q[21]=1997;
        q[23]=2213;
        q[24]=2281;
        q[25]=2411;
        
    for(i=0;i<26;i++)
    {
        c[i]=s+i;
    }
     for(int v=0;v<25;v++)
     {
     for(i=0;i<24;i++)
    {
        for(int j=i+1;j<25;j++)
        {
            if(q[i]*q[j]==in[1][i])
            {
                printf("%c",c[i])
            }
        }
    }}}
    
    
    
}}