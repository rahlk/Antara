#include<stdio.h>
#include<math.h>
int prime(long long int l)
{
    long long int i;
    for(i=2;i<sqrt(l);i++)
    {
        if(l%i==0)
        return 0;
    }
    return 1;
}
long long int factor(long long int l,long long int k)
{long long int i;
    for(i=2;i<sqrt(l);i++)
    {
        if(l%i==0)
        {
            if(k%i==0)
            {
             if(prime(i))
             return i;
            }
        
        else if (k%(l/i)==0)
        {
            if(prime(l/i))
            return l/i;
        }}
    }
}
int main()
{
    long long int i,j,k,l,m,n,t,u=0;
    scanf("%lld",&t);
    while(t--)
    {u++;
        scanf("%lld %lld",&n,&l);
        long long int a[l+1],b[l+1];
        for(i=0;i<l;i++)
        {
            scanf("%lld",&a[i]);
        }
        long long o=factor(a[0],a[1]);
         a[0]=a[0]/o;
        //a[0]=o;
        for(i=1;i<=l;i++)
        {
        	if(i==l)
        	{
             a[i]=o;		
			}
			else
			{
        	m=a[i];
        	a[i]=o;
        	o=m/o;
           }
		}int h=0;
		printf("Case %d: ",u);
		for(i=0;i<l;i++)
		{h=0;
		
			for(j=0;j<l;j++)
			{
				if(a[j]<a[i])
				h++;
			}
			printf("%c",(h+65));
		}
    }
}