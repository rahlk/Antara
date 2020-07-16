#include<stdio.h>
#include<math.h>
void main() {
    int j,n;
    scanf("%d",&j);
    for(int l=0;l<j;l++){
        int s,p=0,c=0,r=0,x=0;
    scanf("%d",&n);
    s=n;
    while(s!=0){
        p=s%10;
        s=s/10;
        r=p*(pow(10,c))+r;
        if(p/4==1){
            x=pow(10,c)+x;
        }
        c++;
        
        }
        r=r-x;
        printf("Case #%d: %d %d",l+1,r,x);
        fflush(stdout);
        printf("\n");
        fflush(stdout);
        
    }
    
}