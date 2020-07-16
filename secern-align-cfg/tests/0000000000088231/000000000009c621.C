#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int nCases=0;
scanf("%d",nCases);
fflush(stdin);
for (int a = 1; a <= nCases; a++) {
  int sum=0;
  scanf("%d",sum);
  fflush(stdin);
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
          //fputs(STDOUT, "Case #$a: $checkL\n");
          break;
        }  
      }
      if(first!=0){
          break;
      }
  }
    
    printf("Case #%d: %d %d\n",a,first,second);
    fflush(stdout);
}

    return 0;
}