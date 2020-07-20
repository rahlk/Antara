
#include<stdio.h>
int main()
{
    int n,a,x[100],arr[100],j=0,k=0,i;
    printf("enter input");
    
        scanf("%d",&n);
        a=n;
        while(n>0)
        {
        x[j]=n%10;
        n=n/10;
         j++;  
    }
    for(i=0;i<j;i++)
    {
    	if(x[i]==4)
    	{
    		x[i]=2;
		}
	}
	
   
    for (i = j-1; i >= 0; i--)

{
    k = 10 * k + x[i];
  
}
     printf("%d\n",n);

n=a-k;
printf("%d\t%d",k,n);
}