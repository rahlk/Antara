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

    int result = 0;
    int prefix = 1;
    int p = N;
    
    while(p>0) {

      int temp = p%10;
      if(temp == 4) {
        result += (temp - 2) * prefix;
      }
      else {
        result += temp * prefix;
      }

      p/=10;
      prefix *=10;
    }

    printf("Case #%d: %d %d\n", i, result, N - result);

  }

#ifdef FILEIO
  fclose(stdin);
  fclose(stdout);
#endif  
  
  return 0; 
}
