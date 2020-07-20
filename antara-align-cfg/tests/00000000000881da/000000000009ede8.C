#include<stdio.h>

int main(){
int i1,n1;
scanf("%d",&n1);
char a[1000],b[1000];
int a1[1000][2],b1[1000][2];
for(i1=0;i1<n1;++i1){
    int i,j,k,m,n;
    scanf("%d",&m);
    n=2*m-2;
    scanf("%s",a);

    strcpy(b,a);
int z=0;
    for(i=0;i<n;++i)
        if(z==0)
    for(j=n-1;j>0;--j){
        int temp=b[j];
        b[j]=b[j-1];
        b[j-1]=temp;
//printf("%s  %s\n",a,b);
int p,q;
a1[0][0]=1;
a1[0][1]=1;
b1[0][0]=1;
b1[0][1]=1;
int x=1,y=1;
for(p=1;p<n;++p){
    if(a[p-1]=='E'){
        a1[p][0]=a1[p-1][0]+1;
        a1[p][1]=a1[p-1][1];
    }
      if(a[p-1]=='S'){
        a1[p][0]=a1[p-1][0];
        a1[p][1]=a1[p-1][1]+1;
    }
}
for(p=1;p<n;++p){
    if(b[p-1]=='E'){
        b1[p][0]=b1[p-1][0]+1;
        b1[p][1]=b1[p-1][1];
    }
      if(b[p-1]=='S'){
        b1[p][0]=b1[p-1][0];
        b1[p][1]=b1[p-1][1]+1;
    }
}
//printf("%s   %s\n",a,b);
        int t=0;
        for(k=0;k<n-1;++k)
        if((a1[k][0]==b1[k][0])&&(a1[k][1]==b1[k][1])&&(a1[k+1][0]==b1[k+1][0])&&(a1[k+1][1]==b1[k+1][1])){
            t=1;
            break;
        }
        if((a1[n-1][0]==b1[n-1][0])&&(a1[n-1][1]==b1[n-1][1]))
        t=1;
        if(t==0){
            printf("Case #%d: %s\n",i1+1,b);
            int d;
         //   for(d=0;d<n;++d)
         //   printf("%d-%d  %d-%d\n",a1[d][0],a1[d][1],b1[d][0],b1[d][1]);
         //   printf("\n");
            z=1;
            break;
        }
      //  printf("yoo");
    }

}

return(0);
}
