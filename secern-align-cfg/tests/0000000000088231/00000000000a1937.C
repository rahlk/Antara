#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int nCases;
scanf("%d",&nCases);
for (int a = 1; a <= nCases; a++) {
  int sum;
  int f;
while ( ( f = getchar() ) != EOF && f != '\n' );
  scanf("%d",&sum);
  int first = 0;
  int second=0;
  int add=0;
  for(int b=0;b<sum;b++){
      for(int c=b;c>0;c--){
          int c1=c-1;
          if((b%10)!=4&&((b/10)%10)!=4&&((b/10)/10)%10!=4&&((((b/10)/10)/10)%10)!=4&&((((b/10)/10)/10/10)%10)!=4&&(((((b/10)/10)/10/10)/10)%10)!=4&&(c1%10)!=4&&((c1/10)%10)!=4&&((c1/10)/10)%10!=4&&((((c1/10)/10)/10)%10)!=4&&((((c1/10)/10)/10/10)%10)!=4&&(((((c1/10)/10)/10/10)/10)%10)!=4){
          add=b+(c-1);
          }
        if(add==sum){
          first = b;
          second=c-1;
          break;
        }  
      }
      if(first!=0){
          break;
      }
  }
fflush(stdout);
    printf("Case #%d: %d %d\n",a,first,second);
}

    return 0;
}