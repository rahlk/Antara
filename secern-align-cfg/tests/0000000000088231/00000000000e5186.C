#include<stdio.h>
#include<math.h>
int power(int a);
int check4(unsigned long long int a){
    unsigned long long int b,i=1,j=1;
    while(a!=0){
        b=a%10;
        if(b==4){
            while(--i){
                j*=10;
            }
            return j;
        }
        a/=10;
        i++;
    }
    return 0;
}
//int power(int x){
//int i=1;
//while(--x){
//    i*=10;
//}
//return i;
//}
int main(){
    int t;
    scanf("%llu",&t);
    unsigned long long int i,j,n[t],a[t],b[t],a4,x;
    for(i=0;i<t;i++)
        scanf("%llu",&n[i]);
    for(i=0;i<t;i++){
            a[i]=n[i];
            b[i]=0;
        while(1){
            a4=check4(a[i]);
            if(!(a4))
                break;
            else{
                a[i]-=a4;
                b[i]+=a4;
            }
        }
    }
    for(i=0;i<t;i++){
    printf("Case #%llu: %llu %llu",i+1,a[i],b[i]);
    if(i<(t-1))
         printf("\n");
    }
    return 0;
}
