#include<stdio.h>
int main(){
    int r[100][100],c[100][100],r'[100][100],c'[100][100],i,k,j,l;
    for(i=0;i<n;i++)
       for(k=0;k<n;k++)
        scanf("%d",&r[i][k]);
    
    for(j=0;j<n;j++)
       for(l=0;l<n;l++)
        scanf("%d",&c[j][l]);
    
    for(i=0;i<n;i++)
       for(k=0;k<n;k++)
        r'[k][i]=r[i][k];
    
        
    for(j=0;j<n;j++)
       for(l=0;l<n;l++)
        c'[l][j]=c[j][l];
    
    for(i=0;i<n;i++){
     for(k=0;k<n;k++)
        printf("\n");
    }
    if(r[i][k]==r'[i][k]){
        printf("POSSIBLE");
    }
    else if(c[j][l]==c'[j][l]){
        printf("POSSIBLE");
    }
    else if(r[i][k]-c[j][l]=r'[i][k]-c'[j][l]){
        printf("POSSIBLE");
    }
    else if(r[i][k]+c[j][l]==r'[i][j]+c'[j][l]){
        printf("POSSIBLE");
    }
    else
    {
        printf("IMPOSSIBLE");
    }
}