#include <stdio.h>

int a[50],b[50];

void main(){
    
    int i,len=0,flag = 0,n,j,k;
    char c[100];
    
    scanf("%d",&n);
    
    for(j=1;j<=n;j++)
	{
		scanf("%s",c);
		
		for (k=0;c[k]!='\0';k++)
        	len++;
    	
		
		for(i=0;i<len;i++)
			a[i]=c[i]-48;
		
		for(i=len-1;i>=0;i--) {
			if(a[i] == 4) {
				if(i == len - 1) {
					a[i] = a[i] - 1;
					b[i] = 1;
				}
				else {
					a[i] = a[i] - 1;
					b[i] = 1;
				}
			}
			else
				b[i] = 0;
		}
		
		printf("Case#%d: ",j);
		
		for(i=0;i<len;i++)
			printf("%d",a[i]);
			
		printf(" ");
			
		for(i=0;i<len;i++) {
			if(b[i] == 0 && flag == 0)
				continue;
			else {
				printf("%d",b[i]);
				flag = 1;	
			}
		}
		
		printf("\n");
	}
			
}