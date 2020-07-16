#include<stdio.h>

void main (){
  int input = 0;

  scanf ("%d", &input);

  int output1 = input;
  int output2 = 0;

  while (output1 >= 10){
      printf ("output1 is: %d \noutput2 is:%d\n", output1, output2);
      if (output1 % 10 == 4 && output1 > 100){ //if the last digit is 4
	  output2 += 2;
	  output2 = output2 * 10;
	} else if (output1 % 10 == 4){
	  output2 += 2;
	}
  output1 = output1 / 10;
  }

printf ("%d %d", input - output2, output2);
}
