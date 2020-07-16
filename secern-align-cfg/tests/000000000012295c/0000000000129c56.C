#include<stdio.h>
int main()
{
        int t,p,q,i,j,k,count,n=1;
        scanf("%d",&t);
        while(t--)
        {
                scanf("%d",&p);
                scanf("%d",&q);
                int max=0,a[p][3],x=q,y=q;
                char ch[p];
                for(i=0;i<p;i++)
                scanf("%d %d %c",&a[i][0],&a[i][1],&ch[i]);
                for(i=0;i<q;i++)
                {
                        for(j=0;j<q;j++)
                        {
                                count=0;
                                for(k=0;k<p;k++)
                                {
                                        if(ch[k]=='E' && a[k][0]<i)
                                        count++;
                                        else if(ch[k]=='W' && a[k][0]>i)
                                        count++;
                                        else if(ch[k]=='N'  && j>a[k][1])
                                        count++;
                                        else if(ch[k]=='S' && j<a[k][1])
                                        count++;
                                }
                                if(max<count)
                                {max=count;x=i;y=j;}
                                else if(max==count && (i<x || i==x && j<y))
                                  {x=i;y=j;}
                        }
                }
                        printf("Case #%d: %d %d\n",n++,x,y);
        }
}
