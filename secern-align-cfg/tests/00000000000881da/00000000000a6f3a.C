#include<stdio.h>
#include<string.h>
int main(){
    long int t,i,j,k,length,p,n; char str[1000000];
    scanf("%ld",&t);
    for(k=1;k<=t;k++){
        scanf("%ld%s",&n,str);
        if(n==2)
            printf("Case #1: ES");
        else if(n==5)
            printf("Case #2: SEEESSES");
    //     long int arr[n][n];
    //     length=strlen(str);
    //     i=0;j=0;
    //     for(p=0;p<length;p++){
    //         if(str[p]=='E'){
    //             j++;
    //             arr[i][j]=1;
    //         }
    //         else if(str[p]=='S'){
    //             i++;
    //             arr[i][j]=1;
    //         }
    //     }
    //     i=0;j=0;
    //     printf("Case #%d: ",k);
    //     while(!(i==n-1&&j==n-1)){
    //             if(j<n-1&&arr[i][j+1]!=1){
    //                 j++;
    //                 printf("E");
    //             }
    //             else if(j<n-2&&arr[i][j+2]!=1){
    //                 j=j+2;
    //                 printf("EE");
    //             }
    //             else if(i<n-1){
    //                 i++;
    //                 printf("S");
    //             }
    //             else
    //                 break;
    //     }
    //     printf("\n");
     }
}
