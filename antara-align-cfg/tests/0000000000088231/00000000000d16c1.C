#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_solution(int i, char *first) {
    char *second;
    int index1 = 0;
    int index2 = 0;
    
    second = (char *)malloc(strlen(first) + 1);
    while (first[index1] && first[index1] != '\n') {
        if (first[index1] == '4') {
            first[index1] = '3';
            second[index2] = '1';
        }
        else
            second[index2] = '0';
        index1++;
        if (second[index2] != '0' || index2 > 0)
            index2++;
    }
    first[index1] = '\0';
    second[index2] = '\0';
    printf("Case #%i: %s %s\n", i+1, first, second);
}

int main(void) {
    char *buffer;
    size_t bufsize = 100000;
    size_t characters;
    int num_tests;
    int n;
    
    buffer = (char *)malloc(bufsize * sizeof(char));
    characters = getline(&buffer,&bufsize,stdin);
    num_tests = atoi(buffer);
    
    for(int i = 0; i < num_tests;i++) {
        getline(&buffer,&bufsize,stdin);
        print_solution(i, buffer);
    }
    return 0;
}