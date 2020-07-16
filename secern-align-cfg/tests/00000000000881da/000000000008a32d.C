#include<stdio.h>
int main()
{
    int T,i,j,N;
    char P[50010];
    scanf("%d",&T);
    for(i = 0; i < T; i++) {
        
        scanf("%d",&N);
        scanf("%s",P);
        j = 0;
        while(P[j] != '\0') {
            if(P[j] == 'E') {
                P[j] = 'S';
            }
            else {
                P[j] = 'E';
            }
            ++j;
        }
        printf("Case #%d: %s\n", i+1, P);
    }
    return 0;
}