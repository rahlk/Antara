#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_solution(int i, int n, char *enemy_moves) {
    char *moves;
    int index = 0;

    moves = (char *)malloc(2 * (n - 1) + 1);
    moves[2 * (n - 1)] = '\0';
    while (index != 2 * (n - 1)) {
        moves[index] = ((enemy_moves[index] ^ 'S') > 0) ? 'S': 'E';
        index++;
    }
    printf("Case #%i: %s\n", i+1, moves);
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
        n = atoi(buffer);
        getline(&buffer,&bufsize,stdin);
        print_solution(i, n, buffer);
    }
    return 0;
}