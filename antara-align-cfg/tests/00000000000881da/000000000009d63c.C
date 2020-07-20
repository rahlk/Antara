#include<stdio.h>
int main(){
        int t,j,i,total,n;
        scanf("%d",&t);
        for(j=0;j<t;j++){
            scanf("%d",&n);
	    total=2*n-2;
	    char a[2*n-2],b[2*n-2];
	    scanf("%s",a);
	    for(i=0;i<total;i++){
		    if(a[i]=='S'){
			    b[i]='E';
		    }
		    if(a[i]=='E'){
			    b[i]='S';
		    }
	    }
	    printf("Case #%d: %s\n",j+1,b);
	}
}