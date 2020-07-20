#include <stdio.h>
#include <stdlib.h>

#define MAX_PA 11000

int primes[MAX_PA];
unsigned char map[MAX_PA];

int max=0;


void add_prime(int i)
{
if(max >=MAX_PA) return;
primes[max]=i;
map[i] = 1;
max++;
}

int is_product(int value, int *a, int *b)
{
int i;
for(i=0; i<max;i++) {
	if(primes[i]>= value/2) return 0;
	if((value % primes[i]) !=0) continue;
	int divided = value/primes[i];
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




int is_prime(int i)
{
	int j;
	for(j=0;j<max; j++)
	{
		if((i%primes[j])==0) return 0;
	}
	return 1;
}

void fill_primes(int maxvalue)
{

int i;
for(i = 2; i<maxvalue; i++) {
	if(is_prime(i)) add_prime(i);
	}	
}


int test(int value)
{
int a,b;
is_product(value, &a,&b);
printf("%d %d\n", a, b);
}

void solve(int *Larray, int length,char *str)
{
int a, b;
int *p_array;
char current;
int last_number;
int i;
p_array = (int *) malloc((length+1)*sizeof(int));
for(i=0; i<MAX_PA; i++) if(map[i]!=0) map[i] = 1;
is_product(Larray[0], &a, &b);
for(i=1; i<length; i++) {
		int newnumber;
		if((Larray[i] % a) == 0) {
			p_array[i-1] = b;
			p_array[i] = a;
			newnumber = Larray[i]/a;
			map[newnumber] = 2;
			b=newnumber;
		} else{
			p_array[i-1] = a;
			p_array[i] = b;
			newnumber = Larray[i]/b;
			map[newnumber] = 2;
			a=newnumber;
		}
	}
last_number = Larray[length-1]/p_array[length-1];
map[last_number]=2;
p_array[length] = last_number;
current = 'A';
for(i=0; i<MAX_PA; i++) {
	if(map[i]==2) {
		int localit;
		for(localit=0; localit<=length;localit++) {
			if(p_array[localit] == i) {
				str[localit]=current;
				}
			}
		current++;
		}
}
str[length+1] = 0;
free(p_array);
}

int main()
{
int i;
int T;
for(i=0; i<MAX_PA; i++) map[i]=0;
fill_primes(MAX_PA);
//for(int i=0; i<max; i++) printf("primes %d:%d\n", i, primes[i]);
scanf("%d", &T );
for(i =0; i< T; i++) {
	int N, L, li;
	int *Larray;
	char *str;
	scanf("%d %d", &N, &L );
	Larray = (int *) malloc(L*sizeof(int));
	str = (char *) malloc((L+2)* sizeof(char));
	for(li=0; li< L; li++) {
		scanf("%d", &Larray[li]);
	}
//	for(li=0; li< L; li++) {
//		printf ("%d ", Larray[li]);
//	}
//	
	str[0]= '\0';
	//if(N<MAX_PA) solve(Larray, L, str);
	printf("Case #%d: %s\n", i+1, str);
	free(Larray);
	free(str);

}
return 0;
}


