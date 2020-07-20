#include<stdio.h>
#include<string.h>
#include<stdlib.h>


 int main()
{
    char o[1000000],n[1000000];
    int i,t,a,j,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d",&a);
   
    	scanf("%s",&o);
	
    for(j=0;o[j]!='\0';j++)
    {
    	if(o[j]==69)
    	n[j]=83;
    	else if(o[j]==83)
    	n[j]=69;
    	else
    	y=0;
    	
	}
    printf("Case #%d: ",i);
   	printf("%s",n);
	
    printf("\n");
    
    }}