#include<stdio.h>
int main()
{
    int q=1,t;
    scanf("%d",&t);
    while(q<=t)
    {
        int n,i,j;
        scanf("%d",&n);
        int m[n][n],k=0,trans[n][n];
        char p[(2*n)-2];
        char ch[(2*n)-2];
        scanf("%s",p);
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                m[i][j]=0;
        m[0][0]=1;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(p[k]=='S')
                {
                    k++;
                    i=i+1;
                    m[i][j]=1;
                    if(j>=0 && p[k]=='S')
                        j--;
                }
                else if(p[k]=='E')
                {
                    k++;
                    if(i==0 && j==0)
                        j+=1;
                    m[i][j]=1;
                    if(p[k]=='S')
                        j--;
                }
            }
        }
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                trans[i][j] = m[j][i];
            }
        }
        
        k=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 && k==0)
                {
                    if(trans[0][1]==1)
                    {
                        ch[k++]='E';
                        j=1;
                    }
                    else if(trans[1][0]==1)
                    {
                        ch[k++]='S';
                        i=1;
                    }
                }
                if((i+1 < n) && (trans[i+1][j]==1))
                {
                    ch[k++]='S';
                    i++;
                    j--;
                }
                else if(trans[i][j+1]==1)
                {
                    ch[k++]='E';
                }
            }
        }
        printf("Case #%d: ",q);
        for(i=0;i<(2*n)-2;i++)
            printf("%c",ch[i]);
        printf("\n");
        q++;
    }
    return 0;
}