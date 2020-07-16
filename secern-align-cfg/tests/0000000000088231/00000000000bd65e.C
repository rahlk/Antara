#include<stdio.h>
#define N 111

char c[N];
int a[N];

int main()
{
    int n,m,i,j,s;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",c);
        m = 0;
        printf("Case #%d: ",i+1);
        while(c[m]){
            s = c[m++] - '0';
            if(s==5){
                printf("2");
                a[m] = 3;
            }else if(s==0){
                printf("0");
                a[m] = 0;
            }
            else{
                printf("1");
                a[m] = s-1;
            }
        }
        printf(" ");
        if(a[1]!=0) printf("%d",a[1]);
        for(j=2;j<=m;j++) printf("%d",a[j]);
        printf("\n");
    }

    return 0;
}
