#include <stdio.h>
#include <string.h>
void main() {
    int i,n,size;
    
    char s[1000];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &size);
        scanf("%s", s);
        for(i=0; i<strlen(s); i++) {
            if(s[i]=='E')
            s[i] = 'S';
            else
            s[i] = 'E';
        }
        printf("Case #%d: %s\n", i+1, s);
    }
}