//
//  main.c
//  codejam_19_1_1
//
//  Created by seunghan son on 06/04/2019.
//  Copyright © 2019 seunghan son. All rights reserved.
//

#include <stdio.h>

int fourCheck(int n){
    while(n != 0){
        if( n % 10 == 4){
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int main(){
    
    int T,input;
    
    scanf("%d", &T);
    
    for(int i = 0 ; i < T ; i++){
        int a = 0, b = 0;
        scanf("%d", &input);
        for(int j = 1 ; j < input ; j++){
            b = j;
            if(!fourCheck(b)){
                a = input - b;
                if(!fourCheck(a)){
                    
                    break;
                }
            }
        }
        printf("Case #%d: %d %d\n",i+1, a, b);
    }
    
    return 0;
}
