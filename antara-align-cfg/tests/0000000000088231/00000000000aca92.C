//
//  code_jam_1.c
//  
//
//  Created by Vincenzo Bellomo on 06/04/2019.
//

#include <stdio.h>
#include <stdlib.h>

int have4(int n) {
  
  while (n > 0) {
    if (n % 10 == 4) {
      return 1;
    } else {
      n/=10;
    }
  }
  
  return 0;
}

int main(int argc, char** argv) {
  
  char buff[120];
  
  fgets(buff, 120, stdin);
  
  int n = atol(buff), i = 0;
  
  for (i = 1; i <= n; i++) {
    fgets(buff, 120, stdin);
    
    int a = atol(buff), b = 0;
    
    while (((have4(a) == 1) || (have4(b) == 1)) && (a >= b)) {
      a--;
      b++;
    }
    
    printf("Case #%d: %d %d\n", i, a, b);
  }
}
