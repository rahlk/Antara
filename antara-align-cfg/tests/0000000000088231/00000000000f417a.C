#include <stdio.h>


int main() {
    
int T;
int x[T];
int a[T], b[T];
int i=0;
    
scanf ("%d", &T);

while (T>i){
    
    scanf("%d",&x[i]);
    
    a[i]= (x[i])/4;
    b[i]= x[i]-a[i];
    
    printf("Case #%d: %d %d\n", i+1, a[i], b[i]);
    i++;
}


}
