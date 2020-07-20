#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,N,i,j,m,k,p,q;
    char ch[100],res[100];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&N);
        for(j=0;j<=(2*N)-2;j++)
        {
            scanf("%c",ch[j]);
            printf("%c",ch[j]);
        }
        res[100]='0';
        k=0;
        p=0,q=0;
        while((p<N) && (q<N) && (ch[k]!='\0'))
        {
            if(ch[k]=='E')
            {
                if((p+1)<N)
                {
                    res[k]='S';
                    p++;
                }
            }   
            else
            {
                if((q+1)<N)
                {
                    res[k]='E';
                    q++;
                }
            }
            k++;
        }
        printf("Case #%d: ",i);
        for(m=0;m<=(2*N)-2;m++)
            printf("%c",res[m]);
        }
return 0;
}