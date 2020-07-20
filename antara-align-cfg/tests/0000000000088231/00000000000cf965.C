#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1;
    int b;
    int N;
    int c;
    int d;
    int x;
    int e=1;
    scanf("%b",&x);
    scanf("%d",&N);
    for(c=1; c<=1000; c*=c){
        while(a<=N/2){
            if(N%c==4){
                d=N-a;
                a=b;
                printf("case #e: %d",b,d);
                a++;
                e++;
            }
            else{
                break;
            }
        }
    }
    return 0;
}
