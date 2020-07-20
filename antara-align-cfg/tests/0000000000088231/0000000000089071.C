/*int main(int argc,char **argv);*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int containsFour(int num) {
  int t;
  while(num > 0) {
    t = num%10;
    if(t == 4) {
      return 1;
    }

    num /= 10;
  }

  return 0;
}

int main(int argc,char **argv) 
{ 

#ifdef FILEIO
  freopen("A2019in.txt","r",stdin); 
  freopen("A2019out.txt","w",stdout); 
#endif

  int T;
  int N;
  scanf("%d\n",&T);

  for(int i=1;i<=T;i++)
  {
    scanf("%d\n", &N);

    int num1 = 0;
    int num2 = 0;
    while(N>0) {
      num1 = N>>1;

      num2 = N - num1;

      if (containsFour(num1) == 0 && containsFour(num2) == 0) {
        printf("Case #%d: %d %d\n", i, num1, num2);
        break;
      }
      
      N >>=1;
    }
  }

#ifdef FILEIO
  fclose(stdin);
  fclose(stdout);
#endif  
  
  return 0; 
}
