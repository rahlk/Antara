#include<stdio.h>
int check4(unsigned long long int a){
    unsigned long long int b;
    while(a!=0){
        b=a%10;
        if(b==4)
            return 0;
        a/=10;
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    unsigned long long int i,j,n[t],a[t],b[t];
    for(i=0;i<t;i++)
        scanf("%llu",&n[i]);
    for(i=0;i<t;i++){
        if(n[i]%2==0){
                a[i]=n[i]/2;
                b[i]=n[i]/2;
            }
            else{
            a[i]=n[i]/2;
            b[i]=(n[i]/2)+1;
            }
        while(1){
            if(check4(a[i])&&check4(b[i]))
                break;
            else{
                a[i]/=2;
                b[i]+=a[i];
            }
        }
    }
    for(i=0;i<t;i++){
     if(i<t-1)
    printf("\n");
        printf("Case #%llu: %llu %llu",i+1,a[i],b[i]);
    }
    return 0;
}
