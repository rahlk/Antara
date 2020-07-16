#include <stdio.h>

int nums[] = { 3, 5, 7, 11, 13, 17 };

int main() {
  int T;
  int N;
  int M;
  
  // Chinese remainder theorem.
  
  scanf(" %d %d %d", &T, &N, &M);
  
  int Q;
  
  int mods[6];
  
  for (Q = 1; Q <= T; Q++) {
      int night;
      
      for (night = 0; night < 6; night++) {
          int i;
          
          // Number of blades = nums[night];
          
          for (i = 0; i < 18; i++) {
              if (i) {
                  printf(" ");
              }
              
              printf("%d", nums[night]);
          }
          
          printf("\n");
          
          int sum = 0;
          
          for (i = 0; i < 18; i++) {
            int value;
            
            scanf(" %d", &value);
            
            sum += value;
          }
          
          mods[night] = sum % nums[night];
      }
      
      int guess = (mods[0] * 2  * (8*9*11*13*17)
                 + mods[1] * 1  * (7*9*11*13*17)
                 + mods[2] * 5  * (7*8*11*13*17)
                 + mods[3] * 5  * (7*8*9*13*17)
                 + mods[4] * 6  * (7*8*9*11*17)
                 + mods[5] * 2  * (7*8*9*11*13)  ) % 1225224;
      
      printf("%d\n", guess);
      
      int verdict;
        
      scanf(" %d", &verdict);
  }
  
  return 0;
}