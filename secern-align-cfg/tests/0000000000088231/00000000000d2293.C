#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int T;
int a;
int b;
int N;
int c;
int main()
{
    scanf("%d",&T);
    scanf("%d",&N);
    for(a=1; a<=T; a++){
        for(b=1; b<=1000; b*=b){
            if(N%b==4&&a%b!=4){
                c=N-a;
                printf("Case #%d: %d %d",T,a,c);
            }
        }
    }
    return 0;
}
