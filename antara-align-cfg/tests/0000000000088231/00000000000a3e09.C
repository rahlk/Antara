#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * 
 */
int main() {
    //char* su;
    //char* cas;
    int nCases;
    //gets(cas);
    //nCases =(int)cas;
    //int f;
//while ( ( f = getchar() ) != EOF && f != '\n' );
scanf("%d",&nCases);

//fflush(stdin);
for (int a = 1; a <= nCases; a++) {
    //fflush(stdout);
    //printf("%d\n",nCases);
    //break;
  int sum;
  //gets(su);
  //sum=(int)su;
  int f;
while ( ( f = getchar() ) != EOF && f != '\n' );
  scanf("%d",&sum);
  //fflush(stdin);
  int first = 0;
  int second=0;
  int add=0;
  int c1;
  for(int b=0;b<sum;b++){
      //for(int c=b;c>0;c--){
          c1=sum-b;
          //int four = 0;
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
          add=b+c1;
          }
        if(add==sum){
          first = b;
          second=c1;
          //fputs(STDOUT, "Case #$a: $checkL\n");
          break;
        }  
      //}
      /*if(first!=0){
          break;
      }*/
  }
    //int g;
//while ( ( g = getchar() ) != EOF && g != '\n' );
fflush(stdout);
    printf("Case #%d: %d %d\n",a,first,second);
    //fflush(stdout);
}

    return 0;
}