#include <stdio.h>
#include <stdlib.h>
int n,size;
char tab[50000];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%d\n",&size);
            gets(tab);
            for(int i=0;i<strlen(tab);i++){
                if(tab[i]=='S'){tab[i]='E';}else{tab[i]='S';}
            }
            printf("Case #%d: %s\n",i+1,tab);


    }

    return 0;
}
