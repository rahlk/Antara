#include<stdio.h>

int main(){
int i1,n1;
scanf("%d",&n1);
int a[1000],b[1000];
for(i1=0;i1<n1;++i1){
    int i,j,k,m,n;
    scanf("%d",&m);
    n=2*m-2;
    scanf("%s",a);

    srcp(b,a);
int z=0;
    for(i=0;i<n;++i)
        if(z==0)
    for(j=0;j<n-1;++i){
        int temp=b[i];
        b[i]=b[j];
        b[j]=temp;

        int t=0;
        for(k=0;k<n-1;++k)
        if((a[k]==b[k])&&(a[k+1]==b[k+1])){
            t=1;
            break;
        }
        if(t==0){
            printf("Case #%d: %s\n",i1=1,a);
            z=1;
            break;
        }
    }

}

return(0);
}
