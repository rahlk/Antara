#include<stdio.h>
#include<string.h>
int main(void){
    int t;
    scanf("%d",&t);
    for(int c=1;c<=t;c++){
        int n,l,a[l+1],m=0;
        scanf("%d%d",&n,&l);
        char b[2*(l+1)];
        for(int j=1;j<=l;j++){
            scanf("%d",&a[j]);
        }b[3]='A';
        for(int k=5;k<=n;k+=2){
            if((k%2!=0)&&(k%3!=0)&&(k%5!=0)&&(k%7!=0))b[k]=b[k-2]+'1';
        }
        for(int i=3;i<=n;i++){
            if(a[1]%i==0){
                printf("Case #%d: %c%c",b[i],b[a[1]/i]);
                m=a[1]/i;
                break;
            }
        }
        for(int i=2;i<=l;i++){
            m=a[i]/m;
            printf("%c",b[m]);
        }printf("\n");
    }
}