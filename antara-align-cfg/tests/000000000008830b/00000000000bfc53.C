//
//  main.c
//  kick1
//
//  Created by 张馨予 on 2019/3/24.
//  Copyright © 2019 张馨予. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min(int a, int b){
    int minimum;
    (a>b)? (minimum= b): (minimum=a);
    return minimum;
}

int removedup(int *l, int N){
    int prev = 0;
    for(int i=0; i<N+1; ++i){
        if(l[i] != l[prev]){
             l[++prev] = l[i];
        }
    }
    int count = prev + 1;
    return count;
}

char alpha(int index){
    char value = 'A';
    value = value + index;
    return value;
}

int firstletter(int *v, int *l, char *text, int L){
    int num1=0, num2=0, num3=0, count=0, index1=0, index2=0, index3=0;
    for(int i=0; i<26; i++){
        if(v[0] % l[i] ==0 && count==0){
            num1 = l[i]; count++;
            index1 = i;
        }
        if(v[0] % l[i] ==0 && count==1){
            num2 = l[i];
            index2=i;
        }
    }
    
    for(int i=0; i<26; i++){
        if(v[1] % l[i] ==0 && l[i]!=num1 && l[i]!=num2){
            num3 = l[i];
            index3=i;
        }
    }
    
    if(num1 == v[0]/num3){
        text[0] = alpha(index2);
        text[1] = alpha(index1);
    }else{
        text[0] = alpha(index1);
        text[1] = alpha(index2);
    }
    text[2] = alpha(index3);
    return num3;
    //printf("[%d %d %d]\n", num1, num2, num3);
    //printf("[%c %c %c]\n", alpha(index1), alpha(index2), alpha(index3));
}

void letters(int *v, int *l, char *text, int L, int num){
    int count = 3;
    for(int i=2; i<L; i++){
        for(int j=0; j<26; j++){
            if(v[i] % l[j] == 0 && l[j]!= num){
                text[count] = alpha(j); //printf("textcount = %c\n", text[count]);
                num = l[j];
                count++;
                break;
            }
        }
    }
    
        //printf("{%s}\n", text);
    
}

int firstprime(int *v, int *l, int N){
    //printf("v[0] is %d\n",v[0]);
    int first = v[0];
    int d=0;
    if(first%2==0){
        l[d]=2;
        first >>= 1;
        d++;
    }
    for(int k=3; k<=min(sqrt(first), N); k+=2){
        //printf("the k is %d\n", k);
        if(first % k ==0){
            l[d]=k; d++;
            if(d==2){
                //printf("the first two prime are %d, %d", l[0], l[1]);
                return d;
            }
            l[d]=first/k; d++;
            //printf("the first two prime are %d, %d", l[0], l[1]);
            return d;
        }
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int T;
    
    //printf("input\n");
    
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        int N, L;
        scanf("%d %d", &N, &L);
        int *v=NULL;
        int *l=NULL;
        char *text=NULL;

        v = (int*)malloc(sizeof(int) * L);
        l = (int*)malloc(sizeof(int) * (L+1));
        text = (char*)malloc(sizeof(char) * (L+2));
        
        for(int j=0; j<L; j++){
            scanf("%d", &v[j]);
        }
        
        int d = firstprime(v, l, N);
        //printf("d is %d\n", d);
        
        for(int j=1; j<L; j++){
            if(v[j] % l[d-1] == 0){
                l[d] = v[j]/l[d-1]; d++;
            }
            else if(v[j] % l[d-2] == 0){
                l[d] = v[j]/l[d-2]; d++;
            }
        }
        
        for(int j=0; j<L+1; j++){
            for(int k=j; k<L+1; k++){
                if(l[j]>l[k]){
                    int temp = l[j];
                    l[j] = l[k];
                    l[k] = temp;
                }
            }
        }
        
        int count = removedup(l, L);
        int num = firstletter(v, l, text, L);
        letters(v, l, text, L, num);
        //for(int j=0; j<L; j++){
            //for(int k=0; k<26; k++){
                //;
           // }
        //}
        //printf("count is %d\n", count);
       
        //for(int j=0; j<26; j++){
            //printf("%d%c, ", l[j], alpha(j));
        //}
        
        text[L+1] = '\0';
        printf("Case #%d: %s\n", i+1, text);

    }
    return 0;
}

