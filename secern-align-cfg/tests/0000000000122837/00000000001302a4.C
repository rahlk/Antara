#include<stdio.h>
int check(int arr[][2],int a,int b,int n){
    for(int i=0;i<n;i++){
        if(arr[i][0]==a && arr[i][1]==b)
        return 0;
    }
    return 1;
}
int main(){
    int t,t1;
    scanf("%d",&t);
    t1=t;
    while(t--){
        int n,k,s,l=0,c,d;
        s=0;
        scanf("%d %d",&n,&k);
        int arr1[n],arr2[n],arr3[n*n][2];
        for(int i=0;i<n;i++)
        scanf("%d",&arr1[i]);
        for(int i=0;i<n;i++)
        scanf("%d",&arr2[i]);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                c=i;d=j;
            if(((arr1[i]>=arr2[j]) && ((arr1[i]-arr2[j])<=k))|| ((arr2[j]>=arr1[i]) && 
            ((arr2[j]-arr1[i])<=k))){
                if(i>j){
                    c=j;d=i;
                }
                for(int a=0;a<=c;a++){
                for(int b=d;b<n;b++){    
                
            if(check(arr3,a+1,b+1,l)){
                arr3[l][0]=a+1;arr3[l][1]=b+1;l++;}}
            }
            }
        }}
        printf("%d\n",l);
    }
    return 0;
}