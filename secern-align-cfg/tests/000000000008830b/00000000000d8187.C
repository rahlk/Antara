#include <stdio.h>
int prime(int x)
{
    int flag=0;
    for (int i = 2; i <= x/2; i++)
        if (x%i==0)
            flag=1;
    if (flag==1)
        return 0;
    else
        return 1;
}
int main()
{
    int t,c=1;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,l;
        scanf("%lld %lld",&n,&l);
        long long int I[l],P[26],P1[l+1];
        char y[l+1],A[26];
        for (int i = 0; i < l; i++)
            scanf("%lld",&I[i]);
        int k=0,temp;
        for (int i = 3; i <= n; i++)
        {
            if (i%2==1)
                if (prime(i))
                {
                    P[k]=i;
                    k+=1;
                }
            if (k>=26)
                break;
        }
        for (int i = 0; i < 26; i++)
            if (I[0]%P[i]==0 && I[1]%P[i]==0)
            {
                temp=P[i];
                break;
            }
        P1[0]=I[0]/temp;
        P1[1]=temp;
        for (int i = 2; i < l+1; i++)
            P1[i]=I[i-1]/P1[i-1];
        char t1='A';
        for (int i = 0; i < 26; i++)
        {
            A[i]=t1;
            t1+=1;;
        }
        int j;
        for (int i = 0; i < l+1; ++i)
        {
            j=0;
            while(P1[i]!=P[j])
                j=j+1;
            y[i]=A[j];
        }
        printf("Case #%d: %s\n",c,y);
    }
    return 0;
}