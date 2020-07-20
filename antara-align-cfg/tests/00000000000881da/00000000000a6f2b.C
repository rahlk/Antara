#include <stdio.h>
#include <string.h>
int main() {
   int t,n,j,i;
   scanf("%d",&t);

   for(j=1;j<=t;j++){
    scanf("%d",&n);
    char arr[2*n-2];
    scanf("%s",&arr);
    for(i=0;i<(2*n-2);i++){
        if(arr[i]=='S') {arr[i]='E';}
        else {arr[i]='S';}
    }
    printf("case #%d: %s\n",j,arr);
   }
   return 0;
}
