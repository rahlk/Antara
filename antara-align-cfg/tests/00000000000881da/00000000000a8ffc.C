#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int n;
	int size;
	char *in;
	char *out;
	scanf(" %d", &n);
	for(int i = 0; i < n; ++i){
		scanf(" %d", &size);
		in = malloc(sizeof(char) * 2 * size);
		scanf(" %s", in);
		for(int j = 0; j < 2*size-1; ++j){
			if(in[j] == 'S'){
				in[j] = 'E';
			} else if(in[j] == 'E'){
				in[j] = 'S';
			}
		}

		printf("Case #%d: %s\n", i + 1, in);

		free(in);
	}
}