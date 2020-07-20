#include <stdio.h>
#include <string.h>

int main()
{
    const int MAX_INPUT_LENGTH = 101;
    int num_test_cases = 0,
        input_string_length;
    char input_num_string[MAX_INPUT_LENGTH],
         output_num_string[MAX_INPUT_LENGTH],
         curr_letter,
         *output_start;

    scanf("%d", &num_test_cases);
    for(int tc_num = 1; tc_num <= num_test_cases; tc_num++){
        scanf("%101s", input_num_string);
        input_string_length =
                strnlen(input_num_string, MAX_INPUT_LENGTH);

        for( int idx = 0; idx < input_string_length; idx++ ){
            curr_letter = input_num_string[idx];
            if(curr_letter == '4'){
                input_num_string[idx] = '2';
                output_num_string[idx] = '2';
            } else {
                output_num_string[idx] = '0';
            }
        }
        output_num_string[input_string_length] = '\0';
        output_start = output_num_string;
        for(int idx = 0; idx < input_string_length; idx++){
            if(output_num_string[idx] == '0'){
                output_start++;
            } else {
                break;
            }
        }

        printf(
                "Case #%d: %s %s\n",
                tc_num,
                input_num_string,
                output_start
              );
    }
    return 0;
}
