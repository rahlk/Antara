#include<stdio.h>
#include<string.h>
int main()
{
	int num;
	scanf("%d",&num);
		for(int i =1;i<=num;i++)
{
	
	int x;
	scanf("%d",&x);
	int y=2*x;
	char ar[y-2];
		scanf("%s",ar);
		for(int j=0;j<y-2;j++)
		{
			if(ar[j]>68 && ar[j]<70)
				ar[j]=ar[j]+14;
			else
				ar[j]=ar[j]-14; 
		
		}
		printf("Case #%d: ",i);
			for(int k=0;k<y-2;k++)
			{
				
			printf("%c",ar[k]);
			
			}
			printf("\n");
	}
	return 0;
}