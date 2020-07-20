#include<stdio.h>

int main()
{
	int t,size,k,i;
	char string[100],sol[100],array[100];
	scanf("%d",&t);
	while(t--)
	{   scanf("%d",&size);
	      char word[size];
        scanf("%s",word);
        for(i=0;i<size;i++)
        string[i]=word[i];
	    for(k=0;k<size;k++)
	    {
	        if(string[i]=='S')
	          sol[i]='E';
	        if(string[i]=='E')
	          sol[i]='S';
	        
	        
	        
	    }
     for(i=0;i<size;i++)
     printf("%s",sol[i]);
}
}