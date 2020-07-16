#include <stdio.h>

main(){
	
	int n,size,i,l,j=0,k,len[1000];
	char str[3000000],path[3000000];
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++) {
    	
    	scanf("%d",&size);
    	
    	scanf("%s",&str);
    	
    	len[i] = (2*size)-2;
    	
    	for(k=0;k<len[i];k++,j++) {
    		
    		if(str[k] == 'S')
    			path[j] = 'E';
    		else
    			path[j] = 'S';
		}
	}
	
	l = 0;
	j = 0;
	
	for(i=1;i<=n;i++){
		
		printf("Case #%d: ",i);
		
		l = len[i];
		
		for(k=0;k<l;k++,j++)
			printf("%c",path[j]);	
		
		printf("\n");
	}	
}