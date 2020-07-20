#include<stdio.h>
int main()
{
    long int t,n;
    scanf("%ld",&t);
    for(int j=1;j<=t;j++){
        scanf("%ld",&n);
        char s[2*n-2];
        scanf("%s",s);
        printf("Case #%d: ",j);
        for (int i=0;i<2*n-2;i++){
            if(s[i]=='E') printf("S");
            else printf("E");
        }
        printf("\n");
    }
}