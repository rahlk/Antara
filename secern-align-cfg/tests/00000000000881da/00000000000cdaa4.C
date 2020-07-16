#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int i;
    scanf("%d",&a);
    scanf("%d",&b);
    char c[3];
    for(a=1; a<=2; a++){
        for(i=0; i<=2; i++){
            scanf("%s",c[i]);
        }
        if(c[0]=='S'){
            printf("Case #%d: E",a);
        }
        if(c[0]=='E'){
            printf("Case #%d: S",a);
        }
        if(c[1]=='S'){
            printf("E");
        }
        if(c[1]=='E'){
            printf("S");
        }
    }
    return 0;
}
