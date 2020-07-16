#include <stdio.h>

void split_num(unsigned int n, unsigned int *result)
{
  result[0] = (n / 2);
  result[1] = n - result[0];
}

int main() 
{
    unsigned int inNum = 0;
    unsigned int splitNum[2] = {};

    scanf("%d", &inNum);
    
    split_num(inNum, splitNum);
    printf("Value A = %d\n\r", splitNum[0]);
    printf("Value B = %d\n\r", splitNum[1]);
    return 0;
}

