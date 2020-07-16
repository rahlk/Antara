#include <stdio.h>
#include <stdlib.h>

#define MAX_PA 11000

unsigned long long primes[MAX_PA];
unsigned char map[MAX_PA];

unsigned long long max=0;


void add_prime(unsigned long long i)
{
if(max >=MAX_PA) return;
primes[max]=i;
map[i] = 1;
max++;
}

unsigned long long is_product(unsigned long long value, unsigned long long *a, unsigned long long *b)
{
unsigned long long i;
for(i=0; i<max;i++) {
	if(primes[i]>= value/2) return 0;
	if((value % primes[i]) !=0) continue;
	unsigned long long divided = value/primes[i];
	if(map[divided] !=0) {
			map[divided] = 2;
			map[primes[i]] = 2;
			*a=divided;
			*b=primes[i];
			return 1;
		}
	}
return 0;
}




unsigned long long is_prime(unsigned long long i)
{
	unsigned long long j;
	for(j=0;j<max; j++)
	{
		if((i%primes[j])==0) return 0;
	}
	return 1;
}

void fill_primes(unsigned long long maxvalue)
{

unsigned long long i;
for(i = 2; i<maxvalue; i++) {
	if(is_prime(i)) add_prime(i);
	}	
}


unsigned long long test(unsigned long long value)
{
unsigned long long a,b;
is_product(value, &a,&b);
printf("%d %d\n", a, b);
}

unsigned long long p_array[200];
void solve(unsigned long long *Larray, unsigned long long length,char *str)
{
unsigned long long a, b;
//unsigned long long *p_array;
char current;
unsigned long long last_number;
unsigned long long i;
//p_array = (unsigned long long *) malloc((length+1)*sizeof(unsigned long long));
for(i=0; i<MAX_PA; i++) if(map[i]!=0) map[i] = 1;
is_product(Larray[0], &a, &b);
for(i=1; i<length; i++) {
		unsigned long long newnumber;
		if((Larray[i] % a) == 0) {
			p_array[i-1] = b;
			p_array[i] = a;
			newnumber = Larray[i]/a;
			if(newnumber < MAX_PA) map[newnumber] = 2;
			b=newnumber;
		} else{
			p_array[i-1] = a;
			p_array[i] = b;
			newnumber = Larray[i]/b;
			if(newnumber < MAX_PA) map[newnumber] = 2;
			a=newnumber;
		}
	}
last_number = Larray[length-1]/p_array[length-1];
if(last_number < MAX_PA) map[last_number]=2;
p_array[length] = last_number;
current = 'A';
for(i=0; i<MAX_PA; i++) {
	if(map[i]==2) {
		unsigned long long localit;
		for(localit=0; localit<=length;localit++) {
			if(p_array[localit] == i) {
				str[localit]=current;
				}
			}
		current++;
		}
}
str[length+1] = 0;
//free(p_array);
}
unsigned long long generate()
{
	unsigned long long i;
char *plain = "CJQUIZKNOWBEVYOFDPFLUXALGORITHMSCJQUIZKNOWBEVYOFDPFLUXALGORITHMSCJQUIZKNOWBEVYOFDPFLUXALGORITHMSCJQUV";
for(i=0; i<100;i++)
{
	printf("%d : %d %d : %c %c \n", primes[plain[i]] * primes[plain[i+1]], primes[plain[i]] * primes[plain[i+1]], plain[i], plain[i+1]);
}

}


unsigned long long main()
{
unsigned long long i;
unsigned long long T;
unsigned long long Larray[200];
char str[200];
for(i=0; i<MAX_PA; i++) map[i]=0;
fill_primes(MAX_PA);
//for(unsigned long long i=0; i<max; i++) prunsigned long longf("primes %d:%d\n", i, primes[i]);
//generate();
//return 0;
scanf("%llu", &T );
for(i =0; i< T; i++) {
	unsigned long long N, L, li;
	scanf("%llu %llu", &N, &L );
	for(li=0; li< L; li++) {
		scanf("%llu", &Larray[li]);
	}
//	for(li=0; li< L; li++) {
//		prunsigned long longf ("%d ", Larray[li]);
//	}
//	
	str[0]= '\0';
	if(N<MAX_PA) solve(Larray, L, str);
	printf("Case #%d: %s\n", i+1, str);

}
return 0;
}


