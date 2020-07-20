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
int startj(int n){
    int ck = 0, count = 0,result=1;
    while(n != 0){
        count++;
        if(n % 10 == 4){
            ck = count;
        }
        n/= 10;
    }
    for(int i = 1 ; i < ck ; i++){
        result *= 10;
    }
    return result;
}

int main(){
    
    int T,input;
    
    scanf("%d", &T);
    
    for(int i = 0 ; i < T ; i++){
        
        int a = 0;
        
        scanf("%d", &input);
        
        int start = startj(input);
        
        for(int j = start ; j < input ; j++){
            
            
            if(!fourCheck(j)){
                
                
                if(!fourCheck(input - j)){
                    a = j;
                    break;
                }
            }
        }
        printf("Case #%d: %d %d\n",i+1, a, input - a);
    }
    
    return 0;
}
