#include<stdio.h>
#include<conio.h>
#include<math.h>
int t;
int log(long int b[])
{
	int i,x;
	int j,l,q,h;
	int p,w;
	long int k;
	for(h=0;h<t;h++)
	{	j=0;l=0;q=0;k=b[h];p=0;w=h;i=0;x=0;
		while(k>0)
		{
			j++;
			k=k/10;
		}
		while(b[h]>0)
		{
			k=b[h]%10;
			b[h]=b[h]/10;
			if(k==4)
			{
				k=2;
				q=q+2*(pow(10,l));
			}
			p=p+k*(pow(10,l++));
		}
		printf("\n# %d: %d %d",++w,p,q);
	}
	return 0;
}
int main()
{	int i;
	printf("\nenter the test cases:");
	long int a[100];
	for(i=0;i<100;i++)
		a[i]=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		{
			printf("\nenter the values of test cases: ");
			scanf("%ld",&a[i]);	
		}
	log(a);
	return 0;
}
