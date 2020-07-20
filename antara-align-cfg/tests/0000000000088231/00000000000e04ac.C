int
main(void){
int T;
scanf("%d", &T);
unsigned long long N[T];
for (int i = 0; i < T; ++i){
scanf("%ld", &N[i]);
}
for (int i = 1; i <= T; ++i){
unsigned long long dec, mod = 10, A = 0, B = 0;
while (N[i-1]/(mod/10) != 0){ 
dec = N[i-1] % mod;
//printf("dec = %d\n", 4 * mod);
if (dec == 4 * mod/10){
A += (dec - 1 * mod/10);
B += 1 * mod/10;
}
else {
A += dec;
}
//printf("A = %d\n", A);
N[i-1] -= dec;
mod *= 10;
}
if (B == 0){
if (A == 0){
A += 1;
}
else{
A -= 1;
B += 1;
}
if (A == 5){
A -= 2;
B += 2;
}
}
printf("Case #%d: %ld %ld\n", i, A, B);
}
}