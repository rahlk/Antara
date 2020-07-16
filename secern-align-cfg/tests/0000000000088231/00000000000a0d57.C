#include<stdio.h>
#include<string.h> 

int main(){
    int test_size, length;
    char test_input[100][102];
    char temp_1[102], temp_2[102];
    
    scanf("%d",&test_size);
    for(int i=0; i<test_size; i++){
        scanf("%s",test_input[i]);
    }
    
    for(int i=0; i<test_size; i++){
        length = strlen(test_input[i]);
        for(int j=0; j<length; j++){
            if( test_input[i][j] == '4'){
                temp_1[j] = temp_2[j] = '2';
            }else{
                temp_1[j] = test_input[i][j];
                temp_2[j] = '0';
            }
        }
        temp_1[length] = temp_2[length] = '\0';
        
        printf("Case #%d: %s %s\n", i+1, temp_1, temp_2 );
    }
    
    return 0;
}