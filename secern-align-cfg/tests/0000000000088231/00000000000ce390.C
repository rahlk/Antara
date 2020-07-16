#include <stdio.h>
int check(int a){
    while(a!=0){
        int c=a%10;
        if(c==4){
            return 1;
        }
        a=a/10;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int x=1;x<=t;x++){
    unsigned long long int n;
    scanf("%llu",&n);
    unsigned long long int i=1,j=n-1;
    while(i<=n/2&&j>=1){
        if((check(i) || check(j))==0)
        {
            if(i+j==n){
                printf("Case #%d: %llu %llu\n",x,i,j);   
                break;
            }
        }
        if(i+j<n)
            i++;
        else
            j--;
    }
}
    return 0;
}
