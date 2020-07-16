#include<stdio.h>


int count(int num)
{
    int count = 0;

    while(num != 0)
    {
        
        num /= 10;
        ++count;
    }
    	return count;
    
}

int doit(int num)
{	
	int a,b;
	int c = count(num);
	if(c==1)
	{
		int a = (num/2)-1;
		int b = (num/2)+1;
		printf("%d %d",a,b);
		
	}
	if(c==2)
	{
		int a = (num/2)-10-1;
		int b = (num/2)+10+1;
		printf("%d %d",a,b);
	}
	if(c==3)
	{
		int a = (num/2)+100-10-1;
		int b = (num/2)-100+10+1;
		printf("%d %d",a,b);
	}
	if(c==4)
	{
	
		int a = (num/2)-1000+100-10-1;
		int b = (num/2)+1000-100+10+1;
		printf("%d %d",a,b);
	}
	if(c==5)
	{
	
		int a = (num/2)+10000-1000+100-10-1;
		int b = (num/2)-10000+1000-100+10+1;
		printf("%d %d",a,b);
	}
	printf("\n");
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
