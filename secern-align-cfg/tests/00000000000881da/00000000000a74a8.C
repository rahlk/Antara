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
        if(lydia[0]=='E' && lydia[2*n-3]=='S'){
            for(int j=0;j<n-1;j++) printf("S");
            for(int j=0;j<n-1;j++) printf("E");
        }
        else if(lydia[0]=='S' && lydia[2*n-3]=='E'){
            for(int j=0;j<n-1;j++) printf("E");
            for(int j=0;j<n-1;j++) printf("S");
        }
        else if(lydia[0]=='E' && lydia[2*n-3]=='E'){
            int down=0,right=0,tmp;
            for(int j=0;j<2*n-3;j++){
                if(lydia[j]=='S') down++;
                if(lydia[j]=='E') right++;
                if(lydia[j]=='S' && lydia[j+1]=='S'){
                    tmp=j;
                    break;
                }
            }
            for(int j=0;j<down;j++) printf("S");
            for(int j=0;j<right;j++) printf("E");
            for(int j=0;j<n-1-right;j++) printf("E");
            for(int j=0;j<n-1-down;j++) printf("S");
        }
        else{
            int down=0,right=0,tmp;
            for(int j=0;j<2*n-3;j++){
                if(lydia[j]=='S') down++;
                if(lydia[j]=='E') right++;
                if(lydia[j]=='E' && lydia[j+1]=='E'){
                    tmp=j;
                    break;
                }
            }
            for(int j=0;j<right;j++) printf("E");
            for(int j=0;j<down;j++) printf("S");
            for(int j=0;j<n-1-down;j++) printf("S");
            for(int j=0;j<n-1-right;j++) printf("E");
        }
        printf("\n");
    }
}
