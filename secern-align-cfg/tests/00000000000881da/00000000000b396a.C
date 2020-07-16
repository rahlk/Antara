/*int main(int argc,char **argv);*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// #define FILEIO

int main(int argc,char **argv) 
{ 
#ifdef FILEIO
  freopen("B2019in.txt","r",stdin); 
  freopen("B2019out.txt","w",stdout); 
#endif

  int T;
  int N;
  scanf("%d\n",&T);

  int LEN = 50005;
  char input[50005] = {0};
  char output[50005] = {0};

  for(int i=1;i<=T;i++)
  {
    scanf("%d\n", &N);

    int length = 2*N - 2;
    memset(input, 0 , LEN*sizeof(char));
    memset(output, 0 , LEN*sizeof(char));    
    
    for(int j=0;j< length;j++) {
      scanf("%c", &input[j]);
    }
    
    for(int j=0;j< length;j++) {
      if(input[j] == 'E') {
        output[j] = 'S';
      }
      else {
        output[j] = 'E';
      }
    }

    printf("Case #%d: ", i);
    for(int j=0;j<length;j++) {
      printf("%c",output[j]);
    }
    printf("\n");
  }

#ifdef FILEIO
  fclose(stdin);
  fclose(stdout);
#endif  
  
  return 0; 
}
