#include<stdio.h>
int  main()
{
	int T,N,A=0,B,count=0,temp5,temp,temp1,i=0,arr[10];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		temp5=N;
		temp=N;
		while(temp5!=0)
			{
				temp5=temp5/10;
				count++;
			}
		while(temp!=0)
		{
			temp1=temp%10;
			if(temp1==7)
			{


				arr[i]=temp1-2;

				i++;
			}
			else
			{

				arr[i]=temp1-3;
				i++;
			}
			temp=temp/10;
		}
	}
	for(i=count-1;i>=0;i--)
	A=10*A+arr[i];
	printf("%d\t",A);
	B=N-A;
	printf("%d",B);
	return 0;
}
