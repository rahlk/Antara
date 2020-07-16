#include<stdio.h>
#include<math.h>

void change4(int n,int *x,int *y) {
    int counter = 0,m,k;
    m = n;
    k = n;
    while(n!=0) {
        if(n%10 == 4) {
            *x = m - (1*pow(10,counter));
            *y = k - *x;
             m = *x;
        }
        counter++;
        n=n/10;
    }
}

void main() {
    int tc;
    scanf("%d",&tc);
    int output[tc][2];
    for(int i=0;i<tc;i++) {
        int n,x,y;
        scanf("%d",&n);
        change4(n,&x,&y);
        output[i][0] = x;
        output[i][1] = y;
    }
    for(int i=0;i<tc;i++) {
        printf("Case #%d: %d %d\n",i+1,output[i][0],output[i][1]);
    }
}
