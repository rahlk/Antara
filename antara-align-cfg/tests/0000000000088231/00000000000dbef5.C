#include<stdio.h>
#include<math.h>
long long int power(int );
int main()
{
    int t;
    scanf("%d",&t);
    for(int m=1;m<=t;m++)
    {
    int arr[500];
    int n;
    scanf("%d",&n);
    int s=n;
    int i=1;
    while(n%(power(i))!=n)
    {
        i++;
    }
    int j;
    for(j=0;j<i;j++)
    {
        int k=n%10;
        if(k==4)
            arr[j]=1;
        else
        {
            arr[j]=k;
        }
        n=n/10;
    }
    int sum=0;

    for(int j=0;j<i;j++)
    {
        sum=sum + arr[j]*(power(j));
    }

    int z=s-sum;
    printf("Case #%d: %d %d\n",m,sum,z);
    }
}
long long int power(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 10;
    }
    else
    {
        return 10*power(n-1);
    }
}
