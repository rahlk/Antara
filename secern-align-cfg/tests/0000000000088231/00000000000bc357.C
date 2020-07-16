#include <stdio.h>

main(){
    
    int i,len=0,flag = 0,n,j,k,ct=0,lena[100];
    char c[5000],a[1000],b[1000];
    
    scanf("%d",&n);
    
    for(j=1;j<=n;j++)
	{
		scanf("%s",c);
		
		len = 0;
		
		for (k=0;c[k]!='\0';k++){
        	len++;
        }
        
        lena[j] = len;
    	
		for(i=0;i<len;i++) {
			if(c[i] == '4') {
				 
				a[ct] = 3;
				b[ct] = 1;
			}
			else {
				a[ct] = c[i] - 48;
				b[ct] = 0;
			}
			ct++;
		}
	}
	
	len = 0;
	
	for(i=1,j=0,k=0;i<=n;i++){
		
		printf("Case #%d: ",i);
		
		len = len + lena[i];
		for(;j<len;j++)
			printf("%d",a[j]);	
		printf(" ");
		for(;k<len;k++){
			if(b[k] == 0 && flag == 0)
				continue;
			else {
				printf("%d",b[k]);
				flag = 1;	
			}
		}
		printf("\n");
		
		flag = 0;
	}
}