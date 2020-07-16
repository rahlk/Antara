#include<stdio.h>
int main(){
    int T,t;
    scanf("%d", &T);
    for(t=1;t<=T;t++){
        int n, i;
        scanf("%d", &n);
        
        char lydiap[2*n-1];
		char myp[2*n-1];
		
        scanf("%s",lydiap);
        
        for(i=0;i<2*n-2;i++){
        	myp[i] = (lydiap[i]=='E')?'S':'E';
		}
        myp[2*n-2] = '\0';
        printf("Case #%d: %s\n", t, myp);
        
    }
    return 0;
}