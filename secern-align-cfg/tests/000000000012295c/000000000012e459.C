#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int p,q;
        scanf("%d %d",&p,&q);
        int a[p][2];
        char d[p];
        int e[(q+1)*(q+1)*p][3];
        for(int j=0;j<p;j++)
        scanf("%d %d %c",&a[j][0],&a[j][1],&d[j]);
        int z=0;
        for(int j=0;j<p;j++)
        {
            if(d[j]=='N')
            {
                for(int k=0;k<=q;k++)
                {
                    for(int l=a[j][1]+1;l<=q;l++)
                    {
                        e[z][0]=k;
                        e[z][1]=l;
                        z++;
                    }
                }
            }
            if(d[j]=='S')
            {
                for(int k=0;k<=q;k++)
                {
                    for(int l=a[j][1]-1;l>=0;l--)
                    {
                        e[z][0]=k;
                        e[z][1]=l;
                        z++;
                    }
                }
            }
            if(d[j]=='E')
            {
                for(int k=a[j][0]+1;k<=q;k++)
                {
                    for(int l=0;l<=q;l++)
                    {
                        e[z][0]=k;
                        e[z][1]=l;
                        z++;
                    }
                }
            }
            if(d[j]=='W')
            {
                for(int k=a[j][0]-1;k>=0;k--)
                {
                    for(int l=0;l<=q;l++)
                    {
                        e[z][0]=k;
                        e[z][1]=l;
                        z++;
                    }
                }
            }
        }
        int count=0;
        for(int j=0;j<z;j++)
        {
            count=0;
            for(int k=j+1;k<z;k++)
            {
                if(e[j][0]==e[k][0]&&e[j][1]==e[k][1])
                count++;
            }
            e[j][2]=count;
        }
        int u=e[0][0],v=e[0][1];
        count=0;
        for(int j=0;j<z;j++)
        {
            if(count<e[j][2])
            {
                count=e[j][2];
                u=e[j][0];
                v=e[j][1];
            }
        }
        printf("Case %d: %d %d",i+1,u,v);
    }
} 