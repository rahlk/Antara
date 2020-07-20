//
//  main.c
//  kick1
//
//  Created by 张馨予 on 2019/3/24.
//  Copyright © 2019 张馨予. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
    // insert code here...
    int T;
    
    //printf("input\n");
    
    scanf("%d", &T);
    
    
    for(int i=0; i<T; i++){
        int N, A=0, B=0;
        scanf("%d", &N);
        if(N<4){
            A = N; B=0;
            
        }else{
            
            //find the digit contains 4
            //-1
            int m=0, n=N;
            while(n){
                n = n/10;
                m++;
            }
            int *d = NULL;
            d = (int*)malloc( sizeof(int) * m );
            
            //printf("the number of digits is %d\n", m);
            
            int i=m-1;
            n=N;
            while(n){
                d[i] = n%10;
                n = n/10;
                i--;
            }
            
            int *a = NULL, *b = NULL;
            a = (int*)malloc( sizeof(int) *m);
            b = (int *)malloc(sizeof(int) *m);
    
            for(int j=0; j<m; j++){
                if(d[j] == 4){
                    a[j]=3;
                    b[j]=1;
                }else{
                    a[j] = d[j];
                    b[j] = 0;
                }
            }
            
            /*
            for(int j=0; j<m; j++){
                printf("%d", d[j]);
            }
            printf("\n");
            for(int j=0; j<m; j++){
                printf("%d", a[j]);
            }
            printf("\n");
            for(int j=0; j<m; j++){
                printf("%d", b[j]);
            }
            printf("\n");
             */
            
            int sa = 0, sb = 0;
            for(int j=0; j<m; j++){
                if(a[j] != 0){
                    break;
                }else{
                    sa++;
                }
                if(b[j] != 0){
                    break;
                }else{
                    sb++;
                }
            }
            
            int bita=1;
            for(int j=m-1; j>=sa; j--){
                A += a[j]*bita;
                bita = bita*10;
            }
            
            int bitb=1;
            for(int j=m-1; j>=sb; j--){
                B += b[j]*bitb;
                bitb = bitb*10;
            }
        }
        
        printf("Case #%d: %d %d\n", i+1, A, B);
        
    }
    return 0;
}

