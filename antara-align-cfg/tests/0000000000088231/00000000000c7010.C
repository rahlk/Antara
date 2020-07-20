#include <stdio.h>
#include <stdlib.h>

int int_pow(int base, int exponent);

int main()
{
  int cases, n, i, j;
  unsigned int *buffer, temp, A, B;
  
  scanf("%d", &cases);
  buffer = malloc(sizeof(unsigned int) * cases);
  
  for(n = 0; n < cases; n++) {
        scanf("%d", &buffer[n]);
  }
  
  for(j = 0; j < cases; j++) {
              temp = buffer[j];
              A = 0;
              for(i = 8; i >= 0; i--) {
                    if (temp / int_pow(10, i) == 4) {
                                  A = A + int_pow(10, i);
                    }
                    temp = temp - ((temp / int_pow(10, i)) * int_pow(10, i));
              }
              B = buffer[j] - A;
              printf("Case #%d: %d %d\n", j + 1, B, A);
              n++;
  }
  	
  return 0;
}

int int_pow(int base, int exponent) {
    int result, i;
    
    if (exponent == 0) {
                 return 1;
    }
    
    result = 1;
    for(i = 1; i <= exponent; i++) {
          result *= base;
    }

    return result;
}