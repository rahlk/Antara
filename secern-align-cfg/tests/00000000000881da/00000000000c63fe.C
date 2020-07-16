#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,N,i,j,m,n,k,p,q;
    char ch[100],res[100];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<(2*N)-2;j++)
        {
            scanf("%d",ch[j]);
        }
        res[100]='0';
        k=0;
        p=0,q=0;
        for(m=0;m<N;m++)
        {
            for(n=0;n<N;n++)
            {
                if(ch[k]=='E')
                {
                    res[k++]='S';
                    p++;
                }
                else
                {
                    res[k++]='E';
                    q++;
                }
                if(p==N-1 && q==N-1)
                    break;
            }
            if(p==N-1 && q==N-1)
                break;
        }
        for(m=0;m<(2*N)-1;m++)
            printf("%c",res[m]);
        }
return 0;
}