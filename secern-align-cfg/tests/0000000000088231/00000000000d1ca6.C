#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int T;
int a;
int b;
int N;
int main()
{
    scanf("%d",&T);

    for(a=1; a<=T; a++){
        for(b=1; b<=1000; b=b*10){
            scanf("%d",&N);
            while(N%b==4&&a%b!=4){
                printf("Case #%d: %d %d",T,a,N-a);
            }
        }
    }
    return 0;
}
