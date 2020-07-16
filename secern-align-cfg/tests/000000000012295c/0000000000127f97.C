#include<stdio.h>
#include<stdlib.h>

int main(){
  int T,t=0;
  int P, Q, x, y, p, i, mx, my;
  int *X, *Y;
  char c;
  X=(int*)calloc(100001,sizeof(int));
  Y=(int*)calloc(100001,sizeof(int));
  
  scanf("%i",&T);
  for(t=0;t<T;t++){
    
    scanf("%i %i\n", &P, &Q);
    Q++;
    
    for(p=0;p<P;p++){
        scanf("%i %i %c",&x,&y,&c);
        switch(c){
            case 'N':
                for(i=y+1;i<Q;i++)
                    Y[i]+=1;
                break;
            case 'S':
                for(i=y-1;i>-1;i--)
                    Y[i]+=1;
                break;
            case 'E':
                for(i=x+1;i<Q;i++)
                    X[i]+=1;
                break;
            case 'W':
                for(i=x-1;i>-1;i--)
                    X[i]+=1;
                break;
        }
    }
    
    mx=my=x=y=0;
    for(i=0;i<Q;i++){
        if(X[i]>mx){
            mx=X[i];
            x=i;
        }
        X[i]=0;
        if(Y[i]>my){
            my=Y[i];
            y=i;
        }
        Y[i]=0;
    }
    
    printf("Case #%i: %i %i\n", t+1, x, y);
  }
}