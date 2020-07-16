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
    
scanf("%d",&nCases);

//fflush(stdin);
for (int a = 1; a <= nCases; a++) {
    
  int sum;
  int sum1;
  int sum2;
  //gets(su);
  //sum=(int)su;
  char su[]="100";
  int f;
while ( ( f = getchar() ) != EOF && f != '\n' );
  scanf("%s",&su);
  //fflush(stdin);
  int first = 0;
  int second=0;
  int add=0;
  int c1;
  char sb[10];
  char sc1[10];
  int lb;
  int sc;
  int fourB = 0;
  int fourC = 0;
  sscanf(su,"%d",&sum);
  int lsu=strlen(su);
  //printf("%d\n",sum);
    //break;
  //for(int b=0;b<lsu;b++){
      //for(int c=b;c>0;c--){
      fourB=0; 
      fourC=0; 
          //c1=sum-b;
          //sprintf(sb,"%d",b);
          //sprintf(sc1,"%d",c1);
          lb=strlen(sb);
          sc=strlen(sc1);
          //if(lb>sc){
          for(int g=0;g<lsu;g++){
          //while(1){
             if(su[g]=='4'){    
                 su[g]='3';
               //8p[3fourB=1;  
             //}
             /*if(sc<=lb){  
                if(sc1[g]=='4'){
               fourC=1;
                 }
             }*/
          }
          //}
          }
          sscanf(su,"%d",&sum1);
          sum2=sum-sum1;
         
          
          if(fourB==0&&fourC==0){
          //add=b+c1;
          }
        if(add==sum){
          //first = b;
          second=c1;
          
        }  
      
fflush(stdout);
    printf("Case #%d: %d %d\n",a,sum1,sum2);
    //fflush(stdout);
}

    return 0;
}