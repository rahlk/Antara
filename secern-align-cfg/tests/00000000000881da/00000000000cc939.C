#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    
    int nCases;
    int number;
    char moves[2000]="1";
    
scanf("%d",&nCases);


for (int a = 1; a <= nCases; a++) {
    char moves1[2000]="1";
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
      /*if(b==0){
             if(moves[b]=='S'){    
                 moves1[b]='E';
          }
             else{
               moves1[b]='S';  
             }
          }
      else if(b==1){
          if(moves1[0]=='E'){
          moves1[b]='S';
          }
          else{
            moves1[b]='E';  
          }
      }
      else if(moves1[last]=='E'&&moves[b]=='S'&&done1==1&&inter==0){
          moves1[b]='E'; 
          inter=1;
      }
      else if(moves1[last]=='E'&&moves[b]=='E'&&done1==1&&inter==0){
          moves1[b]='E'; 
          
      }
      else if(moves1[last]=='S'&&moves[b]=='E'&&done1==1&&inter==0){
          moves1[b]='S'; 
          inter=1;
      }
      else if(moves1[last]=='S'&&moves[b]=='S'&&done1==1&&inter==0){
          moves1[b]='S'; 
          
      }
      else if(moves1[last]=='E'&&moves[b]=='S'&&done1==1&&inter==2){
          moves1[b]='S'; 
          inter=0;
      }
      else if(moves1[last]=='E'&&moves[b]=='E'&&done1==1&&inter==2){
          moves1[b]='S'; 
          inter=0;
      }
      else if(moves1[last]=='S'&&moves[b]=='E'&&done1==1&&inter==2){
          moves1[b]='E'; 
          inter=0;
      }
      else if(moves1[last]=='S'&&moves[b]=='S'&&done1==1&&inter==2){
          moves1[b]='E'; 
          inter=0;
      }
      else if(moves[b]=='S'&&done1==1&&inter==1){
          moves1[b]='E'; 
          inter++;
      }
      else if(moves[b]=='E'&&done1==1&&inter==1){
          moves1[b]='S'; 
          inter++;
      }*/
  }
    
    fflush(stdout);
printf("Case #%d: %s\n",a,moves1);
}

    return 0;
}