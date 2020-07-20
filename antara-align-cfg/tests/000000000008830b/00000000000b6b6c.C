#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fac(int x,int y)
{
    if(y==0) return x;
    return (x<y?fac(y,x):fac(y,x%y));
}
int cmp(const void *a, const void *b)
{
    int x= *(int *)a, y=*(int *)b;
    if(x>y) return 1;
    else if(x<y) return -1;
    else return 0;
}
int main()
{
    int i,j,s,l=0;
    int cas,t,n,ciper[105],temp[105];
    int c[105];

    scanf("%d",&cas);
    for(s=1;s<=cas;s++)
    {
        memset(ciper,0,105);
        memset(c,0,105);
        memset(temp,0,105);
        scanf("%d%d",&t,&n);
        scanf("%d",&ciper[0]);
        for(i=1;i<n;i++)
        {
            scanf("%d",&ciper[i]);
            if(ciper[i]!=ciper[i-1])
            {
                c[i] = temp[i] = fac(ciper[i-1],ciper[i]);
                if(c[i-1]==0)
                {
                    for(j=i-1;c[j]==0 && j>=0;j--) c[j]=temp[j]=ciper[j]/c[j+1];
                }
            }
        }
        c[n]=temp[n]=ciper[n-1]/c[n-1];

        qsort(temp,n+1,sizeof(int),cmp);

        for(i=1,l=1;i<=n && l<26;i++)
        {
            if(temp[i]!=temp[l-1]) temp[l]=temp[i], l++;
        }

        printf("Case #%d: ",s);
        for(i=0;i<=n;i++)
        {
            for(j=0;j<l && temp[j]!=c[i];j++);
            printf("%c",'A'+j);
        }puts("");
    }
    return 0;
}

