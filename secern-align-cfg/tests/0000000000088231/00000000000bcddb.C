#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int t,i,j ;
	scanf ("%d",&t) ;
	for (i=1;i<=t;i++)
	{
		char arr[500] ;
		scanf ("%s",&arr) ;
		long long int n=atoll(arr) ;
		int l=strlen(arr) ;
		for (j=0;j<l;j++)
		{
			if (arr[j]=='4')
				arr[j]='3' ;
		}
		long long int a=atoll(arr) ;
		long long int b=n-a ;
		printf ("Case #") ;
		printf ("%d",i) ;
		printf (": ") ;
		printf ("%d %d",a,b) ;
		printf ("\n") ;
	}
	return 0 ;
   

}