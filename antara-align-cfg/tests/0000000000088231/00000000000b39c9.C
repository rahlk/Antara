#include<stdio.h>
#include<math.h>
main(){
    int t,i,j=0,k=0;
    scanf("%d",&t);
    long a[t],x=0,y=0;
    for(i=0;i<t;i++){
        scanf("%ld",&a[i]);
    } 
    int r[15],s[15];
    for(i=0;i<15;i++){
        s[i]=0;
    }
    for(i=0;i<t;i++){
        long num = a[i];
        while(num != 0){
            r[k] = num % 10;
            num = num/10;
            if(r[k]==4){
                s[k] = 1;
                r[k]--;
            }
            k++;
        }int p=0;
        for(j=k-1;j>=0;j--){
            x += r[j] * pow(10,(k-1-p));
            y += s[j] * pow(10,(k-1-p));
            p++;
        }
        printf("Case #%d: %ld %ld\n",i+1,x,y);
    }
}