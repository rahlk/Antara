#include<stdio.h>
#include<math.h>
typedef long long int ll;
typedef struct no
{
	char a1[26];
	ll r[26];
}no;
ll binary(ll n,no a,ll k)
{
	ll l=0, r=k-1, m;
	while(l<=r)
    {
    	m=(l+r)/2;
    	if(a.r[m]>n)
    	{
    		r=m-1;
		}
		else if(a.r[m]<n)
		l=m+1;
		else if(a.r[m]==n)
		return m;
    }
  return -1;
}


int main()
{
	int t,z=1;
	scanf("%lld",&t);
	while(z<=t)
	{
		ll N,i,L,j;
		scanf("%lld %lld",&N,&L);
		ll a[L];

		for(i=0;i<L;i++)
		{
			scanf("%lld",&a[i]);
		}
		no a2;
		ll p,k;
		for(i=0;i<26;i++)
		{
			a2.a1[i]='A'+i;
		}
		ll t=25;
        for(j=N;j<=N&&t>=0;j--)
        {
            p=0;
            for(k=1;k<j;k++)
            {
             if(j%k==0)
              p++;
            }
            if(p==1)
            {
					a2.r[t]=j;
					t--;
            }
        }
        ll v;
        printf("Case #%d: ",z);
        for(i=0;i<1;i++)
		{
			for(j=0;j<26;j++)
			{
			    if(a[i]%a2.r[j]==0)
			    {
			       printf("%c",a2.a1[j]);
			       v=a[i]/a2.r[j];
			       break;
			    }
	    	}
	    	printf("%c",a2.a1[binary(v,a2,26)]);
		}
		for(i=1;i<L;i++)
		{
			v=a[i]/v;
			printf("%c",a2.a1[binary(v,a2,26)]);
		}
		printf("\n");
		z++;
   }

	return 0;
}



