#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    
    int nCases;
    int number;
    char moves[100000]="1";
    
scanf("%d",&nCases);


for (int a = 1; a <= nCases; a++) {
    char moves1[100000]="1";
    int f;
while ( ( f = getchar() ) != EOF && f != '\n' );
scanf("%d",&number);
int e;
while ( ( e = getchar() ) != EOF && e != '\n' );
  scanf("%s",&moves);
  int lMoves = strlen(moves);
  
  int last; 
  int next;
  int done=0;
  int done1=0;
  int inter=0;
  for(int b=0;b<lMoves;b++){
      done=0;
      done1=0;
      //inter=0;
          if((b-1>=0)){
          last=b-1;  
          done1=1;
          }
          if((b+1<=lMoves)){
          next=b+1;
          done=1;
          }
      if(moves[b]=='S'){    
                 moves1[b]='E';
          }
             else{
               moves1[b]='S';  
             }
      
  }
    
    fflush(stdout);
printf("Case #%d: %s\n",a,moves1);
}

    return 0;
}