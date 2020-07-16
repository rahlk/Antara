#include<stdio.h>
unsigned int check(unsigned int a){
    unsigned int i=1,c=a,b=0;
    while(c>0)
    { 
      if(c%10==5) b=b+(c%10-2)*i; else b=b+(c%10-1)*i;
      c=c/10;
      i=i*10;
    }
      return b;
}

int main(){
    int T;
    scanf("%d",&T);
    unsigned int N[T],i,a[T],b[T];

                    
    for(i=0;i<T;i++) { 
        scanf("%d",&N[i]);
        a[i]=check(N[i]); 
        b[i]=N[i]-a[i];
        printf("Case #%d: %d %d\n",i+1,a[i],b[i]);
    }
  return 0;
    
}