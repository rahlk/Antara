#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char buf[5]; 
    fgets(buf, 5, stdin);
    int t = 0;
    while(atoi(buf) < 1 || atoi(buf) > 100){
    	printf("invalid T \n");
    	fgets(buf, 5, stdin);
    }
    int i;
    while(t < atoi(buf)){
    	i = 0;
    	int j =0;
    	char buff[150]; 
    	fgets(buff, 150, stdin);
    	char *a = calloc(sizeof(char),strlen(buff));
    	char *b = calloc(sizeof(char),strlen(buff));
    	while(i < strlen(buff)-1){
    		if(buff[i] == '4'){
    			a[i]='3';
    			b[i]='1';
    			j=1;
    		}
    		else{
    			a[i]=buff[i];
    			b[i]='0';
    		}
    		i++;
    	}
    	a[i] = '\0';
    	b[i] = '\0';
    	if(j == 0){
    		printf("no 4 digit\n");
   		}
   		else{
   			int k = 0;
   			while(b[k] == '0'){
   				k ++;
   			}
   			b += k;
   			printf("Case #%d: %s %s\n", t+1, a, b);
   		} 
   		free(a);
   		free(b);   		
    	t++;
    }
    return 0;
}