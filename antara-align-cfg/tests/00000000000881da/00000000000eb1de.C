#include<stdio.h>
#include<stdlib.h>

int
main(void){
int T;
scanf("%d", &T);
struct 
{
long long N;
char* P; 
} heh[T];
for (int i = 0; i < T; ++i){
scanf("%lld", &heh[i].N);
heh[i].P = malloc( (2 * heh[i].N - 2) * sizeof(char) );
scanf("%s", heh[i].P);
}
for (int i = 0; i < T; ++i){
for (long long j = 0; j < 2 * heh[i].N - 2; ++j){
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