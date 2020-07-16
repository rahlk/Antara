#include <stdio.h>
#include <string.h>

char num[100005];
int main()
{
    int T;
    scanf("%d",&T);
    int CASE = 0;
    while(T--){
        printf("Case #%d: ",++CASE);
        int N;
        scanf("%d",&N);
        scanf("%s",num);
        int l = strlen(num);
        for (int i=0; i<l; i++) {
            putchar((num[i]=='E')?'S':'E');
        }
        putchar('\n');
    }
    return 0;
}


