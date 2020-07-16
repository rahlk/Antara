#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int
main(void){
int T;
scanf("%d", &T);
long int N;
struct 
{
char* P; 
} heh[T];
for (int i = 0; i < T; ++i){
scanf("%ld", &N);
heh[i].P = malloc( (2 * N - 2) * sizeof(char) );
scanf("%s", heh[i].P);
}
for (int i = 0; i < T; ++i){
for (long int j = 0; j < 2 * strlen(heh[i].P) - 2; ++j){
if(heh[i].P[j] == 'E'){
heh[i].P[j] = 'S';
}
else {
heh[i].P[j] = 'E';
}
}
printf("Case #%d: %s\n", i + 1, heh[i].P);
}
}