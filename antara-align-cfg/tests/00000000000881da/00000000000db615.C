#include<stdio.h>
#include<string.h>
 
void main()
{
    int n,i,j=0,k,t[10];
    char b[100],a[100][100];
     
    printf("ENTER THE VALUE OF N(cases)");
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
        printf("ENTER THE NO. OF GRID OF THE MAZE");
        scanf("%d",&t[i]);
        printf("ENTER THE PATH :");
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Case #%d:",i+1);
	for(j=0;j<n;j++)
	{
		k=strlen(a[i][j]);
		b[j]=a[i][n--];
	}
	printf("%s",b);
    }
    
}