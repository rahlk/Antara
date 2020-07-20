#include<stdio.h>
int main()
{
	int t,i,r,j,l,p,sum,st;
	long n,temp;
	int a[10],b[100];
	static int k,tc;
	i=0,p=1,sum=0,tc=0,st=0;
	scanf("%d",&t);
	for(l=0;l<t;l++)
	{
		scanf("%d",&n);
		temp=n;

		

		while(n!=0)
		{
			r=n%10;
			n=n/10;
			a[i]=r;
			i++;
			k=i;
			if(r==4)
			{
			  st=1;
			}
			
		}
		
	//	printf("%d size",size);
	if(k!=1 && st==1)
	{
	
		for(j=i;j>=0;j--)
		{
			if(a[j]==4)
			{
				a[j]=2;
			}
		}
		
		for(j=0;j<=k-1;j++)
		{
		//	printf(" val= %d\n",a[j]);
			sum+=a[j]*p;
			p=p*10;
		
		}
		temp=temp-sum;
		b[tc]=sum;
		tc++;
		b[tc]=temp;
		tc++;
		
		//printf("%d %d",temp,sum);
	}
		else
		{
			if(st==1)
			{
			
			sum=temp/2;
		//	printf("%d %d",temp/2,sum);
			b[tc]=sum;
			tc++;
			b[tc]=temp/2;
			tc++;
		    }
		}
		
		i=0,p=1,sum=0,st=0;
	}
  
 /* 
  for(i=0;i<=tc-1;i++)
  {
  	printf("%d\n",b[i]);
  }
  */
  p=0;
  for(i=0;i<tc/2;i++)
  {
  printf("Case #%d:",i+1);
  
  for(j=p;j<=p+1;j++)
  {
  	printf(" %d",b[j]);
  	
  }
  printf("\n");
  p+=2;

  }
  
  return 0;
}
