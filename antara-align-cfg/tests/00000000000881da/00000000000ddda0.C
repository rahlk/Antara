#include <stdio.h>

int main(){
	long int t,n;
	scanf("%ld", &t);              		
	for(int i=1;i<=t;i++)
	{
	    scanf("%ld",&n);
	    char a[n],b[n];
	    scanf("%s",a);
	    for(int j=0;j<n;j++)
	    {
	        if(a[j]=='S')
	        b[j]='E';
	        else
	        b[j]='S';
	    }
	    printf("Case #%d",i);
	    printf(": ");
	    puts(b);
	    //printf("\n");
	}
}