#include <stdio.h>
#include <stdlib.h>

void freq(int x, int a[]){

    for(int i=0; i<10; i++) a[i]=0;
    while(x){
        a[x%10]++;
        x/=10;
    }
}

void imp(int x, int y){

    int* fr_x=malloc(10*sizeof(int));
    int* fr_y=malloc(10*sizeof(int));
    freq(x, fr_x);
    freq(y, fr_y);
    if(fr_x[4]==0 && fr_y[4]==0){
        printf("%d %d\n", x, y);
    }
    else if(x){

      if(x%2==0){
        y+=x/2;
        x/=2;
      }
      else {
        y+=x/2+1;
        x/=2;
      }
    imp(x,y);
    }
    else printf("NOPE");

}

int main()
{
    //FILE* f= fopen("data.txt", "r");
    int T, i=0;
    scanf("%d", &T);
    //fscanf(f, "%d", &T);
    while(i<T){
        int num;
        //fscanf(f, "%d", &num);
        scanf("%d", &num);
        printf("Case #%d: ", i+1);
        imp(num, 0);
        i++;
    }
    return 0;
}
