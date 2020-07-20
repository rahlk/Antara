#include <stdio.h>

int nums[] = { 3, 5, 7, 11, 13, 17 };

int main() {
  int T;
  int N;
  int M;
  
  // Chinese remainder theorem.
  
  scanf(" %d %d %d", T, N, M);
  
  int Q;
  
  int mods[6];
  
  for (Q = 1; Q <= T; Q++) {
      int attempt;
      
      for (attempt = 0; attempt < 6; attempt++) {
          int i;
          
          // Number of blades = nums[attempt];
          
          for (i = 0; i < 18; i++) {
              if (i) {
                  printf(" ");
              }
              
              printf("%d", nums[attempt]);
          }
          
          printf("\n");
          
          int sum = 0;
          
          for (i = 0; i < 18; i++) {
            int value;
            
            scanf(" %d", &value);
            
            sum += value;
          }
          
          mods[attempt] = sum % nums[attempt];
      }
      
      int guess;
      
      if (attempt < 6) {
          guess = M;
      } else {
          guess = (mods[0] * 2  * (5*7*11*13*17)
                 + mods[1] * 1  * (3*7*11*13*17)
                 + mods[2] * 4  * (3*5*11*13*17)
                 + mods[3] * 2  * (3*5*7*13*17)
                 + mods[4] * 8  * (3*5*7*11*17)
                 + mods[5] * 13 * (3*5*7*11*13)) % 255255;
      }
      
      printf("%d\n", guess);
      
      int verdict;
        
      scanf(" %d", &verdict);
          
      if (verdict == 1) {
          // We solved this one accidentally.
          break;
      } else if (attempt == 6) {
          // We were sure we were right...
          return 1;
      }
  }
  
  return 0;
}