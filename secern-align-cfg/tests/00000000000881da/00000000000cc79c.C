#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    char c;
    char d;
    scanf("%s %s",&c,&d);
    for(a=1; a<=2; a++){
    if(c=='S'){
        printf("Case #a: E");
    }
    if(c!='S'){
        printf("Case #a: S");
    }
    if(d=='S'){
        printf("E");
    }
    if(d!='S'){
        printf("S");
    }
    }
    return 0;
}
