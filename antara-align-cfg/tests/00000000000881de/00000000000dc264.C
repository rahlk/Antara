#include<stdio.h>
#include<stdlib.h>
int main(void){
    int t,n,b,f,m,a[1200];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&n,&b,&f);
        //printf("%d %d %d %d",t,n,b,f);

        display(n,1);
        for(int j=0;j<n-b;j++)
            scanf("%1d",&a[j]);

        display(n,2);
        for(int j=0;j<n-b;j++){
            scanf("%1d",&m);
            a[j]=a[j]+2*m;
        }

        display(n,4);
        for(int j=0;j<n-b;j++){
            scanf("%1d",&m);
            a[j]=a[j]+4*m;
        }

        display(n,8);
        for(int j=0;j<n-b;j++){
            scanf("%1d",&m);
            a[j]=a[j]+8*m;
        }

        display(n,16);
        for(int j=0;j<n-b;j++){
            scanf("%1d",&m);
            a[j]=a[j]+16*m;
        }
    }

   // for(int j=0;j<n-b;j++){
     //   printf("*%d*",a[j]);
    //}

    int front=a[0];
    int back=((n-1)-a[n-b-1]+32)%32;
    //    printf("*%d*",back);
    int miss[20],p=0;
    for(int j=0;j<n-b-1;j++){
        int d=((a[j+1]-a[j])+32)%32;
        if(d!=1){
            for(int k=0;k<d-1;k++){
                miss[p]=front+p+j+1;
                //printf("%d--%d//<%d>",j,miss[p],p);
                p++;
            }
        }
    }
    for(int j=0;j<front;j++)
        printf("%d ",j);
    for(int j=0;j<p;j++)
        printf("%d ",miss[j]);
    for(int j=back;j>0;j--)
        printf("%d ",n-j);
    printf("\n");
}

void display(int n,int r){
    fflush(stdout);
    int a=1;
    for(int i=0;i<n;i++){
        if(i%r==0)
            a=1-a;
        printf("%d",a);
    }
    printf("\n");
    fflush(stdout);
}
