#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int wymiary;
        scanf("%d", &wymiary);
        char kroczki[2*wymiary-1];
        printf("Case #%d: ",(i+1));
        for(int j=0; j<2*wymiary-1; j++){
            scanf("%c",&kroczki[j]);
            if(kroczki[j]=='S')
                printf("E");
            else if(kroczki[j]=='E')
                printf("S");
        }
        printf("\n");
    }
    return 0;
}

