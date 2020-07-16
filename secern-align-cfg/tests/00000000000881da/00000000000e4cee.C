#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    
    char num;

//    num = getchar();
    
    long n;
    for(int i = 0;i<t;i++) {
        printf("Case #%d: ", i+1);

        scanf("%ld", &n);      
        char c;

        long n_2 = (n << 1) - 2;

        c = getchar();
        for(long j=0;j<n_2;j++) {
            c = getchar();

            if(c == 'E') {
                printf("S");
            } 
            else
            {
                printf("E");      
            }
            
        }

        printf(" \n");    
    }
        
        
        
    
    
}