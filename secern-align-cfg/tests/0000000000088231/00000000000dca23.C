#include<stdio.h>


int main()
{
	int T,N,i,j,a,b,k,l,m,n,r,s,p,o,c,d;
	scanf("%d",&T) ;
	for(i=1 ; i<=T ; i++)
	{
		scanf("%d",&N);
		for(j=2 ; j<=10 ; j++)
		{
			k=N/j;
			l=N-k;
			m=k;
        	n=l;
        	a=0;
        	b=0;
        	c=0;
        	d=0;
			while(m!=0)
			{
				r=m%10;
				if(r==4)
					break;
				else
				{
					a++;
					m=m/10;
				}
					 
			}
			while(n!=0)
			{
				s=n%10;
				if(r==4)
					break;
				else
				{
					b++;
					n=n/10;
				}
					 
			}
			k=o;
			l=p;
			while(o!=0)
			{
				o=o/10;
				c++;
			}
			while(p!=0)
			{
				p=p/10;
				d++;
			}
			if(c==a && d==b )
			{
				printf("Case #%d: %d %d",i,k,l);
			}
			else
				break ;
				
			
					
		}
	}
	return 0;
	
}
