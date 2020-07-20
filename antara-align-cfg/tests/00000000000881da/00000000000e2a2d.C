
#include<stdio.h>
#include<string.h>

int main(){

        int t;
        scanf("%d",&t) ;
        for(int i = 1; i<=t ; i++){
            int n;
            scanf("%d",&n) ;
            char str[2*n-2];
            
            scanf("%s",str) ;
            
            printf("Case #%d: ",i);
            for(int j = 0; j < (2*n - 2) ; j++){
                if(str[j] == 83)printf("E");
                else printf("S");
                
            }
            
            
            printf("\n");
        }


    return 0;
}