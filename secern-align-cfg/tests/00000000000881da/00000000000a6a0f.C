#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        char lydia[100000];
        scanf("%d",&n);
        scanf("%s",lydia);
        printf("Case #%d: ",i);
        if(lydia[0]=='E'){
            for(int j=0;j<n-1;j++) printf("S");
            for(int j=0;j<n-1;j++) printf("E");
        }
        else{
            for(int j=0;j<n-1;j++) printf("E");
            for(int j=0;j<n-1;j++) printf("S");
        }
        printf("\n");
    }
}
