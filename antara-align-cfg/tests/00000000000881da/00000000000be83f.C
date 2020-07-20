#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
void printmaze(int n,char *a){
    int i;
    for(i=0;i<2*(n-1);i++){
        if(a[i] == 'E')
            printf("S");
        else
            printf("E");
    }
}
int main(){
    int t;
    scanf("%i",&t);
    int n;
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        char *a = (char*)malloc(sizeof(char)*2*(n-1));
        scanf("%s",a);
        printf("Case #%d: ",i+1);
        printmaze(n,a);
        printf("\n");
    }
}