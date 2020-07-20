#include<stdio.h>
int main(){

int test=1,testCases;
char input[100];
int i,game;

scanf("%d", &testCases);

while(test <= testCases) {
    
    scanf("%d", &game);

   scanf("%s",input);
   
   for(i = 0; input[i] != '\0'; i++) {
          
          if(input[i] == 'E') {
              input[i] = 'S';
          } else{
              input[i] = 'E';
          }
}

printf("Case #%d: ", test);
printf("%s", input);
if(test != testCases)
printf("\n");
test++;
    } return 0;
}