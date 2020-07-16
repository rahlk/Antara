#include<stdio.h>
int main(){
    int t,i,j,k,length,p,n; char str[1000];
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
        while(!(i==n-1&&j==n-1)){
                if((arr[i][j+1]==1||j==n-1)&&i!=n-1){
                    i++;
                    printf("S");
                }
                else{
                    j++;
                    printf("E");
                }
        }
    }
}