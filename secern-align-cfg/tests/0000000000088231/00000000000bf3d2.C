#include<stdio.h>
#include<math.h>
void main(){
    int T,i,j, digit;
    scanf("%d",&T);
    int *N=malloc(T*sizeof(int));
    for(i=0;i<T;i++)
       scanf("%d",&N[i]);
    int *X=(int*)malloc(sizeof(int)*T);
    int *Y=(int*)malloc(sizeof(int)*T);
    for(i=0;i<T;i++){
        X[i]=0;Y[i]=0;j=0;
        while (N[i] > 0)
        {
          digit = N[i] % 10;
          if(digit==4){
              X[i]+=((digit/2)*pow(10,j));
              Y[i]+=((digit/2)*pow(10,j));
          }else{
              X[i]+=(digit*pow(10,j));
              Y[i]+=(0*pow(10,j));
          }
          N[i] /= 10;
          j++;
        }
    }
    for(i=0;i<T;i++){
        printf("Case #%d: %d %d\n",i+1,X[i],Y[i]);
    }
}