#include<stdio.h>
#include<math.h>
void result(int ,int );
main(){
    int t,i;
    scanf("%d",&t);
    unsigned long a[t];
    for(i=0;i<t;i++){
        scanf("%lu",&a[i]);
    }
    for(i=0;i<t;i++){
        if(a[i]<10){
            printf("Case #%d: %d 1",i+1,a[i]-1);
        }else
            result(i+1,a[i]);
    }

}
void result(int i,int b){
    unsigned long num ,r[b],j=0,k;
    unsigned long x=0,y=0;
    num = b;
    while(num!=0){
        r[j++] = num%10;
        num = num/10;
    }
    for(k=0;k<j;k++){
        if(r[k]==4){
            x += pow(10,(j-1-k)); 
            y += (r[k]-1)*pow(10,(j-1-k));
        }else{
            y += r[k] * pow(10,(j-1-k));
        }
    }
    printf("Case #i: %lu %lu",x,y);
}