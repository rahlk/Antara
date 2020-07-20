#include<stdio.h>
#define N 100011
#define MAX(x,y) (x>y?x:y)

int a[4][N];

int main()
{
    char c;
    int n,x,y,num1,num2,i,j,k,mx,my,mxl,myl;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        mx = my = mxl = myl = 0;
        for(j=1;j<=x;j++){
            scanf("%d %d %c",&num1,&num2,&c);
            if(c=='N'){
                for(k=num2+1;k<=y;k++) a[2][k]++;
            }
            else if(c=='S'){
                for(k=0;k<num2;k++) a[2][k]++;
            }
            else if(c=='E'){
                for(k=num1+1;k<=y;k++) a[1][k]++;
            }
            else{
                for(k=0;k<num1;k++) a[1][k]++;
            }
        }

        for(j=0;j<=y;j++){
            if(a[1][j]>mx){
                mx = a[1][j];
                mxl = j;
            }
            a[1][j] = 0;
        }

        for(j=0;j<=y;j++){
            if(a[2][j]>my){
                my = a[2][j];
                myl = j;
            }
            a[1][j] = 0;
        }
        printf("Case #%d: %d %d\n",i,mxl,myl);
    }
    return 0;
}
