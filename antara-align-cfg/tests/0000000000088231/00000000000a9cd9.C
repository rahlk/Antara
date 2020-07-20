#include<stdio.h>
#include<math.h>
int main (){

        int loop = 0;
        scanf ("%d", &loop);

        for(int i=0; i < loop; i++){
                int input = 0;
                int count = 1;
                scanf ("%d", &input);

                int output1 = input;
                int output2 = 0;
                int first = 1;

                while (output1 >= 4){
                        //printf ("output1 is: %d \noutput2 is:%d\n", output1, output2);
                        if (output1 % 10 == 4 && first == 1){ //if the last digit is 4
                                first = 0;
                                output2 = 1;
                        } else if (output1 % 10 == 4){ 
                                output2 = output2 + pow(10, (count-1));
                        } 
                        output1 = output1 / 10;
                        count++;
                }
                printf ("Case #%d: %d %d\n", i+1, input - (output2*2), output2*2);
        }
        return 0;
}