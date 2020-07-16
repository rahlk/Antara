#include <stdio.h>
#include <string.h>
void main(){
    int t;
    scanf("%d", &t);
    int i=0;
    while(i<t){
        printf("Case #%d:", i);
        int n;
        scanf("%d", &n);
        int len = 2*n-2;
        char dump;
        scanf("%c", &dump);
        char str[len];
        gets(str);
        for(int j=1;j<=len;j++)
            {printf("%c", str[len-j]);
            }
        i++;
        printf("\n");
    }
}
