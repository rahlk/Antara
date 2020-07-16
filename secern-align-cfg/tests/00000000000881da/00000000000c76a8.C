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
    	int s = 0;
    	int e = 0;
    	i = 0;
    	char *bufff = calloc(10,sizeof(char));
    	fgets(bufff, 10, stdin);
    	int n = atoi(bufff);
    	char *buff = calloc(n+1,sizeof(char));
    	fgets(buff, 2*n-1, stdin);
    	char *output = calloc(n+1,sizeof(char));
    	while(i < strlen(buff)){
    		if(buff[i] == 'E'){
    			output[i] = 'S';
    			e++;
    		}
    		if(buff[i] == 'S'){
    			output[i] = 'E';
    			s++;
    		}
    		i++;
    	}
    	output[i] = '\0';
    	printf("Case #%d: %s\n", t+1, output); 
    	fgets(bufff,10, stdin);
    	free(output);	
    	free(buff);
    	free(bufff);
    	t++;
    }
    return 0;
}
