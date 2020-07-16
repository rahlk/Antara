#include<stdio.h>
#include<conio.h>
int main()
{
	int cases,cases_ch,i,j,k;
	char a[100],b[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	printf("enter no.of cases:\n");
	scanf("%d",&cases);
	for(i=0;i<cases;i++)
	{
	  printf("enter no.of words:\n");
	  scanf("%d",&cases_ch);
	  for(j=0;j<cases_ch;j++)
	  {
	  	scanf("%s",&a[j]);
	  	if (j>=1)
	  	{
	  		if(a[j-1]%10==a[j]%10)
	  		b[i]=b[i]+1;
		}
	  }	
	  
	}
	for (k=0;k<cases;k++)
	printf("%d ",b[i]);
	return 0;
}