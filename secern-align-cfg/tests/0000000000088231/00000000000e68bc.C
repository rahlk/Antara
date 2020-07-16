#include<stdio.h>
int ispresent(long);
void chk(long ,int);
main(){
    int t,i;
    scanf("%d",&t);
    long a[t];
    for(i=0;i<t;i++){
        scanf("%ld",&a[i]);
    }
    for(i=0;i<t;i++){
        chk(a[i],i);
    }
}
void chk(long n,int m){
    int i,j=0;
    int temp[15],fin[15];
    for(i=0;i<15;i++){
       // sum[i] = 0;
    }
    long num = n;
    long y=0;
    while(num!=0){
        temp[j] = num%10;
        // if(temp[j]==4){
        //     temp[j] = temp[j]-1;
        //     sum[i]=1;
        // }
        j++;
        num = num/10;
    }
    for(i=0;i<j;i++){
        fin[i] = temp[j-1-i];
        if(fin[i]==4){
            fin[i] = fin[i]-1;
        y = y+pow(10,(j-1-i));
        }
    }
    
    printf("Case #%d: ",m+1);
    for(i=0;i<j;i++){
        printf("%d",fin[i]);
    }printf(" %ld\n",y);
    
}