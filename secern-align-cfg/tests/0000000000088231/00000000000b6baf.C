#include <stdio.h>
#include<string.h>


int main() {
	long long int t,x=1,i,j,m,n,yui;
	scanf("%lld",&t);
	while(x<=t)
	{ printf("Case #%lld: ",x);
	    char a[102]={-1};
	    scanf("%s",a);
	    int b[102]={0};
	    long long int l=strlen(a);
	    for(i=0;i<l;i++)
	    {
	        if(a[i]=='4')
	        {
	            printf("3");
	            b[i]=1;
	        }
	        else
	        printf("%d",a[i]-48);
	    }printf(" ");
	    for(j=0;j<102;j++){
	        if(b[j]==1){
	             yui=j; break;
	        }
	    }
	    for(j=yui;j<i;j++)printf("%d",b[j]);
	    printf("\n");
	  
	   x++;
	}
	return 0;
}