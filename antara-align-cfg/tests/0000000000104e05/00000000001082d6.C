#include <stdio.h>
#include <string.h>
long long int gcd(long long int a,long long int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    int i,j,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n;
        printf("Case #%d: ",i);
        scanf("%d",&n);
        int update[26];
        char a[n][60];
        int check[n];
        for(j=0;j<n;j++)
            check[j]=0;
        for(j=0;j<26;j++)
            update[j]=1000000;
        for(j=0;j<n;j++)
            scanf("%s",a[j]);
            int pos=0,finalpos=0,finalcount=0,l=0,m=0,count=0,ans=0,indexk;
        for(j=0;j<n;j++)
        {
            count=0,finalcount=0;
            if(check[j]==1)
                continue;
            l=strlen(a[j]);
            for(int k=j+1;k<n;k++)
            {
                
                m=strlen(a[k]);
                if(check[k]==1)
                    continue;
                    //printf("%s %s\n",a[j],a[k]);
                while(l>=0 && m>=0)
                {
                    if(a[j][l-1]==a[k][m-1] && update[a[k][m-1]-65]>count)
                    {
                        count++;
                        pos=a[j][l-1]-65;
                        //printf("%d %c\n",pos,a[j][l-1]);
                        l--;
                        m--;
                    }
                    else
                        break;
                }
                if(count>finalcount)
                {
                    finalcount=count;
                    finalpos=pos;
                    indexk=k;
                }
            }
            if(finalcount<update[finalpos] && finalcount!=0)
            {
                ans+=2;
                check[indexk]=1;
            }
            update[finalpos]=finalcount;
        }
       //for(j=0;j<26;j++)
            //printf("%d ",update[j]);
        printf("%d\n",ans);
    }
}