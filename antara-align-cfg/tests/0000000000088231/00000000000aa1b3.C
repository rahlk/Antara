//
//  main.c
//  CodeJam1
//
//  Created by Dinuru Seniya on 4/6/19.
//  Copyright © 2019 DS Creations. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int VariableA(int N){
    int new=0;
    int value = N;int x=0;
    while (value > 0) {
        int digit = value % 10;
        if(digit==4){new+=pow(10,x);}
        x++;
        value /= 10;
    } return new;
}
int main(int argc, char *argv[]) {
    int N,T,B,A;
    scanf("%d",&T);
    while (T>0){
        scanf("%d",&N);
        A=VariableA(N);
        B=N-A;
        printf("Case#%d: %d %d\n",T,A,B);
        T--;
    }
    
    return 0;
}
