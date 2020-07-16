#include <stdio.h>
int
main(int argc, char **argv){
int t,n,i,j;
char l[50001];
scanf("%d\n",&t);
for(i=1;i<=t;i++){
  scanf("%d\n",&n);
  scanf("%s\n",l);
  printf("Case #%d: ",i);
  for(j=0;j<(2*n-2);j++){
    switch(l[j]){
      case 'E': printf("%s","S");
      break;
      case 'S': printf("%s","E");
      break;
      }
    }
  printf("\n");
  }
}
