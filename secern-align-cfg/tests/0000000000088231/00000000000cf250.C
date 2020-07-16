#include<stdio.h>

void main()
{
	int n,ip[100],j=0,f1,f2,temp[100],i;
	//printf("enter num of text cases : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&ip[i]);
		temp[i]=ip[i];
	}
	for(j=0;j<n;j++)
	{
		for(i=1;i<=(ip[j]/2);i++)
		{		//printf("%d \n",temp);
			f1=check(i);
			f2=check(temp[j]-i);
			//printf("%d \t %d",f1,f2);
			if(f1==1 && f2==1)
			{
				printf("%d ------- %d\n",i,temp[j]-i);
				break;
			}
		}
    }
}

int check(int temp)
{
	int c=0,flag,i,dig[10];
	while(temp!=0)
	{
		//printf("%d ",temp);
		dig[c]=temp%10;
		temp=temp/10;
		c++;
	}
	for(i=0;i<c;i++)
	{
		//		printf("%d             ",dig[i]);
		if(dig[i]==4)
		{
			flag=0;
			break;
		}
		else
			flag=1;
	}
	return flag;
}