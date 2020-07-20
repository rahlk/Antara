#include<stdio.h>
int main()
{
    int n,i,j=0,k=0,m=0,n1=0,flag=1;
    scanf("%d",&n);
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
				}
			}
			for(n1=k;n1>0;n1=n1/10)
			{
				if(n1%10==4)
				{
					flag=0;
				}
			}

			if(flag==1)
			{
				printf("Case #%d: %d %d\n",i+1,j,k);
				break;
			}
		}
	}
	return 0;
}

	