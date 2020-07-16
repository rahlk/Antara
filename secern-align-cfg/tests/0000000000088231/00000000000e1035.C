#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int find(char *str)
{
	strrev(str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='4')
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	char str[100];
    long int p,q,t,j,a,b,n;
//	printf("\n enter t : ");
	scanf("%ld",&t);
	while(t--)
	{
	//	printf("\n enter hte value of n : ");
		scanf("%d",&n);
		a=n/2;	
	    b=n-a;
	
		sprintf(str,"%d",a);
	
		j=find(str);
		if(j>=0)
		{
			a=a-(2*pow(10,j));
			b=b+(2*pow(10,j));
		}
	
		sprintf(str,"%d",b);
	
		j=find(str);
		if(j>=0)
		{
			b=b-(2*pow(10,j));
			a=a+(2*pow(10,j));	
		}	
		sprintf(str,"%d",b);
		p=find(str);
		sprintf(str,"%d",b);
		q=find(str);
		if((p==-1)&&(q==-1))
		{
			printf("\n a=%d b=%d",a,b);
		}
	}
	return 0;
}