#include<stdio.h>

int main() {
	int t;
	scanf("%d",&t);
    for(int a0=1;a0<=t;a0++)
	{
	    
	  long int n;
	   scanf("%ld",&n);
	  long int a[100],d[100];
	   long int c=0,cn,k,j=0,i;
	   cn=n;
	   while(n!=0)
	   {
	       k=n%10;
	       if(k==4)
	       {
	       a[j]=k-1;
	       d[j]=1;
	       }
	       else
	       {
	       a[j]=k;
	       d[j]=0;
	       }
	       j++;
	       n=n/10;
	       
	   }
	   
	   printf("Case #%d: ",a0);
	   for(i=j-1;i>=0;i--)
	   printf("%ld",a[i]);
	   printf(" ");
	   
	   for(i=j-1;i>=0;i--)
	   printf("%ld",d[i]);
	   printf("\n");
}

}

