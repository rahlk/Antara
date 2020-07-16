#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int i;
    scanf("%d",&a);
    scanf("%d",&b);
    char c[b];
    for(a=1; a<=2; a++){
        scanf("%s",c);
        for(i=0; i<=b; i++){
        if(c[i]=='S'){
            c[i]='E';
        }
        if(c[i]=='E'){
            c[i]='S';
        }
        }
    }
    printf("Case #%d: %s",a,c);
}
