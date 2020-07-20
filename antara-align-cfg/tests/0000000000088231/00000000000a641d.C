#include<stdio.h>
int main (){
    
    int loop = 0;
    scanf ("%d", &loop);
    
    int arr[loop];
    
    for(int i=0; i < loop; i++){
        int input = 0;
        scanf ("%d", &input);

        int output1 = input;
        int output2 = 0;

        while (output1 >= 4){
                // printf ("output1 is: %d \noutput2 is:%d\n", output1, output2);
                if (output1 % 10 == 4 && output1 >= 10){ //if the last digit is 4
                        output2 += 2;
                        output2 = output2 * 10;
                } else if (output1 % 10 == 4){
                        output2 += 2;
                }
                output1 = output1 / 10;
        }

        printf ("Case#%d: %d %d\n", i+1, input - output2, output2);
    }
        return 0;
}