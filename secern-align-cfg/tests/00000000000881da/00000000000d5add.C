#include <stdio.h>
#include <string.h>
void main(){
    int t;
    scanf("%d", &t);
    int i=0;
    while(i<t){
        int n;
        scanf("%d", &n);
        int len = 2*n-2;
        char str[len];
        gets (str);
        for(int j=1;j<len;j++)
            printf("%c", str[len-j]);
        i++;
    }
}