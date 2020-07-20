#include<stdio.h>
#include<String.h>
int main()
{
    int T,N,i,j,k,m=0,n=0;
    int a[10][10]={0};
    int b[10][10]={0};
    char s[10];
    char nw[10];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        strcpy(nw,"");
        scanf("%d",&N);
        scanf("%s", &s);
        a[m][n]=1;
        for(j=0;j<strlen(s);j++)
        {
           if(s[j]=='S' && m<N)
           {
               m=m+1;
               a[m][n]=1;
           }
           else if(s[j]=='E'&& n<N)
           {
               n=n+1;
               a[m][n]=1;
           }
        }
        m=0;
        n=0;
        b[m][n]=1;
        while(m!=N-1 && n!=N-1)
        {
            if(a[m][n+1]==1)
            {
                m=m+1;
                b[m][n]=1;
                strcat(nw,"S");
            }
            else
            {
                n=n+1;
                b[m][n]=1;
                strcat(nw,"E");
            }
        }
        if(m==N-1)
        {
            for(n;n<N-1;n++)
            {
                b[m][n]=1;
                strcat(nw,"E");
            }
        }
        if(n==N-1)
        {
            for(m;m<N-1;m++)
            {
                b[m][n]=1;
                strcat(nw,"S");
            }
        }
        printf("#%d: %s",i+1,nw);
    }
}
