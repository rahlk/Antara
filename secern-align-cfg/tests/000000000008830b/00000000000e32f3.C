#include<stdio.h>

int gcd(int a, int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 

int main(){
    int T,temp;
    int N,L,row[10000],row1[10000],row2[10000];
    char c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d%d",&N,&L);
        for(int j=0;j<L;j++){
            scanf("%d",&row[j]);
        }
        temp = gcd(row[0],row[1]);
        row1[0]=row[0]/temp;
        row1[1]=temp;
        for(int j=2;j<=L;j++){
            row1[j]=row[j-1]/temp;
            temp=row1[j];
        }
        for(int j=0;j<=L;j++){
            row2[j]=row1[j];
        }
        for(int j=0;j<L;j++){
            for(int k=0;k<L;k++){
                if(row1[k]>row1[k+1]){
                    int temp1=row1[k];
                    row1[k]=row1[k+1];
                    row1[k+1]=temp1;
                }
            }
        }
        int m=L;
        for(int j=1;j<=m;j++){
            if(row1[j]==row1[j-1]){
                for(int k=j+1;k<=m;k++){
                    row1[k-1]=row1[k];
                }
                 m=m-1;
                 j=j-1;
            }
        }
        printf("Case #%d: ",i+1);
        for(int j=0;j<=L;j++){
            for(int k=0;k<=25;k++){
                if(row2[j]==row1[k]){
                    printf("%c",c[k]);
                }
            }
        }
        printf("\n");
        
        // for(int j=0;j<26;j++){
        //     printf("%d ",row1[j]);
        // }
    }
    
    return 0;
}