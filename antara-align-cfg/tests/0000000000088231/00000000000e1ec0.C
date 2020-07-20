#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    
    char num;

    num = getchar();
    
    
    for(int i = 0;i<t;i++) {
        printf("Case #%d: ", i+1);
        
        
        //printf("Test %c\n", num);

        FILE *ptr = fopen("temp.tmp","w");

        int k=0;

        do {
        	num = getchar();
        	
        	//printf("Test %c\n", num);
        	
        	if(num < '0' || num > '9')
        		break;
        		
            
            
            
        
            if(num != '\n' ) {
                if(num == '4') {
                    printf("%c", '3');
                    fprintf(ptr,"%c",'1');
                    k++;
                } else {
                    if(k > 0)
                	    fprintf(ptr,"%c",'0');
                    printf("%c", num);
                }
            }
            
            
        
        } while(num != '\n');
        
        fclose(ptr);
        
        printf(" ");

        
        
        if(k>0) {
            ptr = fopen("temp.tmp","r");
            do {
                char c = fgetc(ptr);
                if( feof(ptr) ) {
                    break ;
                }
                printf("%c", c);
            } while(1);
            fclose(ptr);
        } else {
            printf("0");
        }
        
        
        
        printf(" \n");
    }
}