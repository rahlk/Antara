#include<stdio.h>
int main()
{
	int t,h;
	int rem1,rem2,n,n1,n2,ans,m1,m2,p,k;
	scanf("%d",&t);
	h = 1;
	while(t--)
	{
		k=0,n1=1,n2=1,ans=0,p=1;
		scanf("%d",&n);
			while(ans!=n)
			{
				while(n1<n)
				{
					ans = n1+n2;
					if(ans==n)
					{
						m1 = n1;
						m2 = n2;
					
						while(n1>1)
						{
							rem1 = n1%10;
							rem2 = n2%10;
							n1 = n1/10;
							n2 = n2/10;
							if(rem1==4 || rem2==4)
							{
								break;
							}
							if((rem1!=4 && n1<=1) && (rem2!=4 && n2<=1))
							{
								k=1;
								break;
							}
						}
						n1 = m1;
						n2 = m2;
						if(k==1)
						{
							break;
						}
					}		//block of if
					n1++;
					if(n1==n)
					{
						if(n2!=n)
						{
							p++;
							n2++;
							n1=p;
						}
					}
				}	
				if(k==1)
				{
					break;
				}			
			}
		printf("Case #%d: %d %d\n",h,n1,n2);
		h++;
	}
}

