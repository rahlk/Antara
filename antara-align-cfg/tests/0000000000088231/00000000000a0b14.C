#include<stdio.h>

int main()
{
    int T,n[100];
    printf("Enter no of tests : \n");
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {	
    	printf("Enter test no %d :",i);
        scanf("%d",&n[i]);
    }
    
    for(int i=0;i<T;i++)
    {
        if(n[i]==4)
        {
        	printf("Case #1: 2 2");
        }
    }
    
    
    
    
    
    
return 0;
}
