#include <stdio.h>
#include <string.h>

main() {
    char c[1000000],s,path[1000000],cnt=0;
    int n,num,j,i,k=0,l,size,len[1000];
    
    scanf("%d",&num);
    
    for(k=1;k<=num;k++){
    	
    	scanf("%d",&size);
    	scanf("%s",c);
    	n = (2*size)-2;
    	len[k] = n;
    	
    	for(i=0;i<n;i=i+1)
	    {
	        if(c[i]=='E')
	        c[i]='S';
	        else
	        c[i]='E';
	    }
	    
	    for(i=0;i<n;i++,cnt++)
    		path[cnt] = c[i]; 			
	}
	
	l = 0;
	j = 0;
	
	for(i=1;i<=num;i++){
		
		printf("Case #%d: ",i);
		
		l = len[i];
		
		for(k=0;k<l;k++,j++)
			printf("%c",path[j]);	
		
		printf("\n");
	}
}