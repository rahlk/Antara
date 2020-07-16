#include<stdio.h>

int main(){    
    int cas;
    scanf("%d", &cas);
    int i =0;
    for(i;i<cas;i++){
        int s;
        int l = 2*s-2;
        char x[l];
        scanf("%d",&s);
        scanf("%s", &x);
        int j = 0;
        for(j;j<2*s-2;j++){
        	if(x[j]== 'E') x[j]='S';
        	else x[j]='E';
		}
		printf("Case #%d: %s\n", i,x);
        
        
    }
    
    
    
}