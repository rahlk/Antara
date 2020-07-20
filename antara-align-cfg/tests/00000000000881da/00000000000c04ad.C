#include <stdio.h>
#include <stdlib.h>
int main() {
int t,n;
 int k=0;
scanf("%d",&t);
while(t--){

   k++;
    scanf("%d",&n);
    char p[2*n-2];
    scanf("%s",p);
    printf("Case #%d: ",k);


    for(int i=0;i<2*n-2;i++){
        if(p[i]=='E')   printf("%c",'S');
        else if(p[i]=='S') printf("%c",'E');
    }

    printf("\n");


}

}