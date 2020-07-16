#include <stdio.h>

int main() {
	int t,count=1;
	scanf("%d",&t);
	while(t--)
	{
	    int num,new=0,digit,n1,n2;
	    scanf("%d",&num);
	    while(num!=0)
	    {
	        digit=num%10;
	        if(digit==4)
	        {
	            new=new*10+3;
	            
	        }
	        else
	        new=new*10+digit;
	        num=num/10;
	    }
	    int rem,rev=0;
	    while(new!=0)
	    {
	        rem=new%10;
	        rev=rev*10+rem;
	        new=new/0;
	    }
	    printf("Case #%d: %d%d",count,num-rev,rev);
	    count++;
	}
	return 0;
}

