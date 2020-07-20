#include<stdio.h>
int main(){
    int n,r[100][100],c[100][100],R[100][100],C[100][100],i,k,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       for(k=0;k<n;k++)
        scanf("%d",&r[i][k]);
    
    for(j=0;j<n;j++)
       for(l=0;l<n;l++)
        scanf("%d",&c[j][l]);
    
    for(i=0;i<n;i++)
       for(k=0;k<n;k++)
        R[k][i]=r[i][k];
    
        
    for(j=0;j<n;j++)
       for(l=0;l<n;l++)
        C[l][j]=c[j][l];
    
    for(i=0;i<n;i++){
     for(k=0;k<n;k++)
        printf("\n");
    }
    if(r[i][k]==R[i][k]){
        printf("POSSIBLE");
    }
    else if(c[j][l]==C[j][l]){
        printf("POSSIBLE");
    }
    else if(r[i][k]-c[j][l]==R[i][k]-C[j][l]){
        printf("POSSIBLE");
    }
    else if(r[i][k]+c[j][l]==R[i][j]+C[j][l]){
        printf("POSSIBLE");
    }
    else
    {
        printf("IMPOSSIBLE");
    }
}