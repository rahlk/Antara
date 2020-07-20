#include<stdio.h>
int main()
{
    long long int n,i,j,k,m,n1,flag=1;
    scanf("%lld",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
		j=1;
		k=a[i]-1;
		for(j=1;j<k;j++,k--)
		{
			flag=1;
			for(m=j;m>0;m=m/10)
			{
				if(m%10==4)
				{
					flag=0;
					break;
				}
			}
			for(n1=k;n1>0;n1=n1/10)
			{
				if(n1%10==4)
				{
					flag=0;
					break;
				}
			}

			if(flag==1)
			{
				printf("Case #%lld: %lld %lld\n",i+1,j,k);
				break;
			}
			
		}
	}
	return 0;
}

	