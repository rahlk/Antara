#include<stdio.h>
int checkprime(int x)
{
    int k,ans=2;
    for(k=2;k<(x/2);k++)
    {
        if((x%k)==0)
        {
            ans=1;
            return ans;
            break;
        }
    }
    if(ans!=1)
    {
        ans=0;
        return ans;
    }
}
int check(int n[],int l, int a)
{
    int i;
    for(i=0;i<=l;i++)
    {
        if(n[i]==a)
        {
            return i;
            break;
        }
    }
}

int main()
{
    int i,j,t,max,p,a,res,l,n[100];
    char s[100],c;
    
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &max);
        scanf("%d", &l);
        p=l;
        
        for(j=max;p!=0;j--)
        {
            res=checkprime(j);
            if(res=0)
            {
                j=n[p];
                p--;
            }
        }
        c='A';
        for(j=0;j<=p;j++)
        {
            s[j]=c;
            c++;
        }
        
        
        for(j=0;j<=l;j++)
        {
            scanf("%d", &a);
            res=check(a,l,n);
            printf("%c", s[res]);
        }
    }
    return 0;
}







