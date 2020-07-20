#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
        int t,i,j,n,curr=0,k,k1,k2,nil[10],be;
        scanf("%d",&t);
        for(j=0;j<t;j++){
	    curr=0;

            scanf("%d",&n);
	    char str[10][50];
	    for(i=0;i<n;i++){

		scanf("%s",str[i]);
	    }
	    for(i=0;i<10;i++){
		    nil[i]=0;
	    }
	    for(i=0;i<n;i++){
		for(k=i+1;k<n;k++){

			if(nil[i]==1 || nil[k]==1){
				be=be+1;
			}
			else{
				k1=strlen(str[i]);
				k2=strlen(str[k]);
	    
				if(str[i][k1-1]==str[k][k2-1]){
					curr=curr+2;
					nil[k]=1;
					break;

				}
			}
			
		}
	   }
	printf("Case #%d: %d\n",j+1,curr);
	}
}