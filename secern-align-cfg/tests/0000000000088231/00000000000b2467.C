#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void valid(long long int A,long long int B,int a)
{
	long long int C,D,sum1=0,sum2=0;
	int l=0,m=0;
	int arr1[1000],arr2[1000];
	C=A;
	D=B;
	while (C>0)
	{
		arr1[l]=C%10;
		C=C/10;
		l++;
	}
	while (D>0)
        {
                arr2[m]=D%10;
                D=D/10;
                m++;
        }
	for (int s=0;s<l;s++)
	{
		if (arr1[s]==4)
		{
			arr1[s]=arr1[s]+1;
		}
	//	printf("%d",arr1[s]);
		sum1+=arr1[s]*(pow(10,s));
	}
	for (int y=0;y<m;y++)
	{
		if (arr2[y]==4)
		{
			arr2[y]=arr2[y]-1;
		}
	//	printf("%d",arr2[y]);
		sum2+=arr2[y]*(pow(10,y));
	}
	printf("Case #%d: %lld %lld\n",a,sum1,sum2);
}
int main()
{
	unsigned int T;
	scanf("%d",&T);
	long long int check;
	for (int i=0;i<T;i++)
	{
		long long int num;
		scanf("%lld",&check);
		num=check;
		int arr[1000];
		long long int A,B;
		if (num%2==0)
		{
			A=num/2;
			B=A;
			valid(A,B,i+1);
		}
		if (num%2!=0)
		{
			A=num/2;
			B=A+1;
			valid(A,B,i+1);
		}
	}
	return 0;
}




