#include <stdio.h>
#include <string.h>

int a[50],b[50];

void main(){
    
    int i,len,flag = 0,n;
    char c[100];
    
    scanf("%d",&n);
    
	scanf("%s",c);
	len = strlen(c);
	
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
	
	printf("Case#%d: ",n);
	
	for(i=0;i<len;i++)
		printf("%d",a[i]);
		
	printf(" ",n);
		
	for(i=0;i<len;i++) {
		if(b[i] == 0 && flag == 0)
			continue;
		else {
			printf("%d",b[i]);
			flag = 1;	
		}
	}
			
}