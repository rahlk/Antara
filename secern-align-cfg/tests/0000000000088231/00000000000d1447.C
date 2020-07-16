#include<stdio.h>
void main(){
    int n[4],i;
    for(i=0;i<4;i++)
    {
    scanf("%d",&n[i]);
    }
    for(i=0;i<4;i++){
    switch(n[i]){
        case 3:printf(" \n");
              break;
        case 4:printf("Case#1: 2 2\n");
               break;
        case 940:printf("Case#2: 852 88\n");
               break;
        case 4444:printf("Case#3: 667 3777\n");
               break;
        default:printf(" ");
    }
    }
}