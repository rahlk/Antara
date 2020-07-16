#include <stdio.h>

int main() {
	int count,temp;
	char c;
	scanf("%d",&count);
	for(int i=1;i<=count;i++)
	{
	    scanf("%d",&temp);
	    getchar();
	    temp=(2*temp)-2;
	    printf("CASE #%d: ",i);
	    while(temp>0)
	    {
	        c=getchar();
	        if(c=='S')
	        {printf("E");}
	        else
	        //if(c=='E')
	        {printf("S");}
	        temp--;
	    }
	    
	    printf("\n");
	}
	return 0;
}