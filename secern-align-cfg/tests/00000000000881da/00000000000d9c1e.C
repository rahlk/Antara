#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d", &t);
    int i=0;
    while(i<t){
        int n;
        scanf("%d", &n);
        int len = 2*n-2;
        char dump;
        scanf("%c", &dump);
        char str[len];
        for(int k=0;k<len;k++){
            scanf("%c", &str[k]);
        }
        printf("Case #%d: ", i+1);
        for(int j=1;j<=len;j++)
            {printf("%c", str[len-j]);
            }
        i++;
        printf("\n");
   
    }
    return 0;
}

