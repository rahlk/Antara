#include <stdio.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for (i=0;i<t;i++) {
        int j,n;
        scanf("%d",&n);
        n=(n*2)-2;
        char position[n];
        for (j=0;j<n;j++) {
            scanf("%c",&position[j]);
            if (position[j]=='E') {
                position[j-1] = 'S';
            } else if (position[j]=='S') {
                position[j-1] = 'E';
            }
        }
        printf("Case #%d: %s",i+1,position);
    }
}