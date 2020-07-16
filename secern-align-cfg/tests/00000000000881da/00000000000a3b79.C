#include<stdio.h>
#include<string.h>
int main(){
    int t,i,j,k,length,p,n; char str[1000000];
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        scanf("%d%s",&n,str);
        int arr[n][n];
        length=strlen(str);
        i=0;j=0;
        for(p=0;p<length;p++){
            if(str[p]=='E'){
                j++;
                arr[i][j]=1;
            }
            else if(str[p]=='S'){
                i++;
                arr[i][j]=1;
            }
        }
        i=0;j=0;
        printf("Case #%d: ",k);
        while(!(i==n-1&&j==n-1)){
                if(j<n-2&&!(arr[i][j+1]==1&&arr[i][j+2]==1)){
                    j++;
                    printf("E");
                }
                else if(j<n-1&&arr[i][j+1]==0){
                    j++;
                    printf("E");
                }
                else{
                    i++;
                    printf("S");
                }
        }
        printf("\n");
    }
}