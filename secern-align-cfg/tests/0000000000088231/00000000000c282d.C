#include <stdio.h>
#include <string.h>

#define SIZE 128

void main(){
    char n[SIZE],a[SIZE],b[SIZE];
    int t;
    
    scanf("%d",&t);

    for(int j = 1 ; j  <= t ; j++){
        scanf("%s",n);
        memset(a,'\0',sizeof(a));
        memset(b,'\0',sizeof(b));
    
        for(int i = 0 ; i < strlen(n) ; i++){
            if(n[i] == '4'){
                a[i] = '3';
                b[i] = '1';
            }else{
                a[i] = n[i];
                b[i] = '0';
            }
        }
        
        int k = 0;
        while(b[k] == '0' && k < strlen(b))
          k++;
        
        printf("Case #%d: %s %s\n",j,a,b+k);
    }
}