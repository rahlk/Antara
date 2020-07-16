#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include <assert.h>

char* makePath(long int n) {
    long int len = 2*n - 2;
    char* path = malloc(len+1);

    return path;
}

char oppose(char dir) {
    return dir == 'E' ? 'S' : 'E'; 
}

void move(char* path, char movement, long int* e, long int* s) {
    if(path) *path = movement;

    if(movement == 'E') {
        (*e)++;
    }
    else{
        assert(movement == 'S');
        (*s)++;
    }
}

// int movementEquals(char movement, char comparison) {
//     return movement == comparison;
// }

// oppose lydia's movement when on the same square, elsewhere follow her when that doesn't mean going out of the labyrinth
void makeMyWay(char* myPath, char* lydia, long int n) {
    long int len = strlen(lydia);
    assert(len == 2*n - 2);

    long int myE = 0;
    long int myS = 0;
    
    long int lyE = 0;
    long int lyS = 0;

    long int movement = 0; // movements made
    while(movement < len) {
        char lyMove = lydia[movement];
        char myMove;

        if(myE == lyE && myS == lyS) { // both at the same position
            myMove = oppose(lyMove);
        }
        else if(myE == n-1) { // on the edge of x
            myMove = 'S';
        }
        else if(myS == n-1) { // on the edge of y
            myMove = 'E';
        }

        // edge cases
        else {
            if(myE > myS) {
                myMove = 'S';
            }
            else if(myS > myE) {
                myMove = 'E';
            }

            else if(lyS > myS){
                myMove = 'S';
            }
            else if(lyE > myE) {
                myMove = 'E';
            }
            else {
                myMove = oppose(lyMove);
            }
        }

        // printf("ly: (%d, %d)\tmy: (%d, %d)\n", lyE, lyS, myE, myS);

        move(myPath+movement, myMove, &myE, &myS);
        move(lydia+movement, lyMove, &lyE, &lyS);

        movement++;
    }
}

void way() {
    int t = 1; // 1 <= t <= 100
    scanf("%d", &t);

    int i = 1;
    for(; i <= t; i++) {
        long int n = 2; // 2 <= n <= 50000
        scanf("%ld", &n);

        char* lydia = makePath(n);
        scanf("%s", lydia);

        char* myPath = makePath(n);
        makeMyWay(myPath, lydia, n);

        // Case #1: ES
        printf("Case #%d: %s\n", i, myPath);

        free(myPath);
        free(lydia);
    }
}

int main() {
    way();

    return 0;
}
