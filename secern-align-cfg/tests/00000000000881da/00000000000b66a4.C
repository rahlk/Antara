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
        int N;
        char *p1=NULL, *p2=NULL;
        scanf("%d", &N);
        p1=(char *)malloc(sizeof(char) * (2*N-2));
        p2=(char *)malloc(sizeof(char) * (2*N-2));
        scanf("%s", p1);
        //printf("%s\n", p1);
        int j=0;
        for(j=0; j<2*N-2; j++){
            if(p1[j]=='S'){
                p2[j]='E';
            }else if(p1[j]=='E'){
                p2[j]='S';
            }
        }
        p2[j] = '\0';
        //printf("%d %d", strlen(p1), strlen(p2));
        
        printf("Case #%d: %s\n", i+1, p2);

    }
    return 0;
}

