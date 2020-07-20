#include<stdio.h>
int main(){
    int x[600],y[600];
    char dir[600];
    int n,p,q;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d %d",p,q);
        for(int j = 0;j<p;j++){
            scanf("%d %d %c",x[j],y[j],dir[j]);
        }
        for(int j=0;j<p;j++){
            switch(dir[j]){
                case 'N': ++x[j];
                break;
                case 'S': --x[j];
                break;
                case 'E': ++y[j];
                break;
                case 'W': --y[j];
                break;
            }
        }
    }
}