#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main() {
    
    int nCases;
scanf("%d",nCases);

for (int a = 1; a <= nCases; a++) {
  int sum;
  scanf("%d",sum);
  int first = 0;
  int second=0;
  int add=0;
  for(int b=0;b<sum;b++){
      for(int c=b;c>0;c--){
          int c1=c-1;
          int four = 0;
          /*char*check=  b;
          char*check1=  c1;
          int checkL = strlen(check);
          int checkL1 = strlen(check1);
          for(int e=0;e<checkL;e++){
             if((int)check[e]==4){
              four=1;   
             } 
          }
          
             for(int e=0;e<checkL1;e++){
             if((int)check1[e]==4){
              four=1;   
             } 
          } */
          
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
}

    return 0;
}