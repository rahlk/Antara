#include<stdio.h>


int doit(int num)
{
	int a = num/2;
	int b = num/2;
	printf("%d %d",a,b);
}





int main()
{
    int T,n[100];
    printf("Enter no of tests : \n");
    scanf("%d",&T);
    
    for(int i=1;i<=T;i++)
    {	
    	printf("Enter number no %d :",i);
        scanf("%d",&n[i]);
    }
    
    for(int i=1;i<=T;i++)
    {
    	printf("Case #%d: ",i);
        int num = n[i];
        doit(num);
    }
    
    
    
    
    
    
return 0;
}
