#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_KETA_DECIMAL	101
#define MAX_KETA_BINARY		1000

char *pnum[26];
int pnum_ptr = 0;

char *pandagram[100];
char *letter_pnum[101];

void init_memory()
{
	int i;
	
	for ( i=0; i<26; i++ )
		pnum[i] = (char *)malloc( MAX_KETA_BINARY+1 );
	for ( i=0; i<100; i++ )
		pandagram[i] = (char *)malloc( MAX_KETA_DECIMAL+1 );
	for ( i=0; i<101; i++ )
		letter_pnum[i] = (char *)malloc( MAX_KETA_BINARY+1 );
}

void free_memory()
{
	int i;
	
	for ( i=0; i<26; i++ )
		free( pnum[i] );
	for ( i=0; i<100; i++ )
		free( pandagram[i] );
	for ( i=0; i<101; i++ )
		free( letter_pnum[i] );
}

void put_decimal(char *a)
{
	int i, flag = 0;

	for ( i=0;i<MAX_KETA_DECIMAL-1;i++ ) {
		if ( flag != 0 || a[i] != '0' )
			flag = 1;
		if ( flag )
			printf( "%c", a[i] );
	}
	printf("%c\n", a[MAX_KETA_DECIMAL-1]);
}

void put_binary(char *a)
{
	int i, flag = 0;

	for ( i=0;i<MAX_KETA_BINARY-1;i++ ) {
		if ( flag != 0 || a[i] != '0' )
			flag = 1;
		if ( flag )
			printf( "%c", a[i] );
	}
	printf("%c\n", a[MAX_KETA_BINARY-1]);
}

void add_decimal(char *a, char *b, char *dst)
{
	int i, carry = 0, val;

	for ( i=MAX_KETA_DECIMAL-1;i>=0;i-- ) {
		val = (int)(a[i] - '0') + (int)(b[i] - '0') + carry;
		if ( val >= 10 ) {
			carry = 1;
			val -= 10;
		}
		else
			carry = 0;
		dst[i] = '0' + (char)val;
	}
	dst[MAX_KETA_DECIMAL] = '\0';
}

/* this function only works in the case of a >= b */
void sub_decimal(char *a, char *b, char *dst)
{
	int i, val;
	int carry = 0;
	
	for ( i=MAX_KETA_DECIMAL-1;i>=0;i-- ) {
		if ( (int)(a[i] - '0') < (int)(b[i] - '0') + carry ) {
			val = 10 + (int)(a[i] - '0') - (int)(b[i] - '0') - carry;
			dst[i] = '0' + (char)val;
			carry = 1;
		}
		else {
			val = (int)(a[i] - '0') - (int)(b[i] - '0') - carry;
			dst[i] = '0' + (char)val;
			carry = 0;
		}
	}
	dst[MAX_KETA_DECIMAL] = '\0';
}

/* when a > b, returns 1 */
/* when a == b, returns 0 */
/* when a < b, returns -1 */
int cmp_decimal(char *a, char *b)
{
	int i;
	
	for ( i=0; i<MAX_KETA_DECIMAL; i++ ) {
		if ( a[i] > b[i] )
			return 1;
		else if ( a[i] < b[i] )
			return -1;
	}
	return 0;
}

void set_decimal(char *a, char *src)
{
	int i, len;
	
	len = strlen( src );
	for ( i=0; i<MAX_KETA_DECIMAL; i++ )
		a[i] = '0';
	a[MAX_KETA_DECIMAL] = '\0';
	for (i=MAX_KETA_DECIMAL-len;i<MAX_KETA_DECIMAL;i++ )
		a[i] = src[i+len-MAX_KETA_DECIMAL];
}

void set_binary(char *a, char *src)
{
	int i, len;
	
	len = strlen( src );
	for ( i=0; i<MAX_KETA_BINARY; i++ )
		a[i] = '0';
	a[MAX_KETA_BINARY] = '\0';
	for (i=MAX_KETA_BINARY-len;i<MAX_KETA_BINARY;i++ )
		a[i] = src[i+len-MAX_KETA_BINARY];
}

void chg_to_binary_work(int ptr, char *tmp_d, char *a_d, char *dst_b)
{
	char tmp_next_d[MAX_KETA_DECIMAL+1];
	
	if ( ptr > 0 ) {
		add_decimal( tmp_d, tmp_d, tmp_next_d );
		chg_to_binary_work( ptr-1, tmp_next_d, a_d, dst_b );
	}
	
	if ( cmp_decimal( a_d, tmp_d ) >= 0 ) {
		dst_b[ptr] = '1';
		sub_decimal( a_d, tmp_d, a_d );
	}
}

void chg_to_binary(char *a, char *dst)
{
	int i;
	char tmp[MAX_KETA_DECIMAL+1];
	
	set_binary( dst, "0" );
	set_decimal( tmp, "1" );
	chg_to_binary_work( MAX_KETA_BINARY-1, tmp, a, dst );
}

void rshift_binary(char *a, int k, char *dst)
{
	int i;
	
	for ( i=0; i<=k; i++ )
		dst[i] = a[0];
	for ( i=k+1; i<MAX_KETA_BINARY; i++ )
		dst[i] = a[i-k];
}

void lshift_binary(char *a, int k, char *dst)
{
	int i;
	
	dst[0] = a[0];
	for ( i=1; i<MAX_KETA_BINARY-k; i++ )
		dst[i] = a[i+k];
	for ( i=MAX_KETA_BINARY-k; i<MAX_KETA_BINARY; i++ )
		dst[i] = '0';
}

void add_binary_work(char *a, char *b, int carry, char *dst)
{
	int i, val;
	
	for ( i=MAX_KETA_BINARY-1; i>=0; i-- ) {
		val = (int)(a[i] - '0') + (int)(b[i] - '0') + carry;
		if ( val >= 2 ) {
			carry = 1;
			val -= 2;
		}
		else
			carry = 0;
		dst[i] = '0' + (char)val;
	}
}

void add_binary(char *a, char *b, char *dst)
{
	add_binary_work( a, b, 0, dst );
}

void reverse_binary(char *a, char *dst)
{
	int i;
	
	for ( i=0; i<MAX_KETA_BINARY; i++ ) {
		if ( a[i] == '0' )
			dst[i] = '1';
		else
			dst[i] = '0';
	}
	dst[MAX_KETA_BINARY] = '\0';
}

void sub_binary(char *a, char *b, char *dst)
{
	char rev_b[MAX_KETA_BINARY+1];
	
	reverse_binary(b, rev_b);
	add_binary_work(a, rev_b, 1, dst);
}

/* if a > 0 returns 1 */
/* if a == 0 returns 0 */
/* if a < 0 returns -1 */
int cmp0_binary(char *a)
{
	int i;
	
	if ( a[0] == '1' )
		return -1;
	for ( i=1; i<MAX_KETA_BINARY; i++ ) {
		if ( a[i] == '1' )
			return 1;
	}
	return 0;
}

/* 1: a > b */
/* 0: a == b */
/* -1: a < b */
int cmp_binary(char *a, char *b)
{
	char tmp[MAX_KETA_BINARY+1];
	
	sub_binary( a, b, tmp );
	return cmp0_binary( tmp );
}

void div_binary(char *a, char *b, char *dst)
{
	int i;
	char divtmp[MAX_KETA_BINARY+1];
	char tmp[MAX_KETA_BINARY+1];
	
	set_binary( divtmp, "0" );
	set_binary( tmp, "0" );
	set_binary( dst, "0" );
	for ( i=0; i<MAX_KETA_BINARY; i++ ) {
		lshift_binary( divtmp, 1, tmp );
		set_binary( divtmp, tmp );
		divtmp[MAX_KETA_BINARY-1] = a[i];
		if ( cmp_binary( divtmp, b ) >= 0 ) {
			dst[i] = '1';
			sub_binary( divtmp, b, tmp );
			set_binary( divtmp, tmp );
		}
		else {
			dst[i] = '0';
		}
	}
}

void gcd_binary(char *a, char *b, char *dst)
{
	int k = 0;
	char t[MAX_KETA_BINARY+1], tmp[MAX_KETA_BINARY+1];
	char zero[MAX_KETA_BINARY+1];
	
	set_binary( zero, "0" );
	set_binary( t, "0" );
	set_binary( tmp, "0" );
	while( a[MAX_KETA_BINARY-1] == '0' && b[MAX_KETA_BINARY-1] == '0' ) {
		k++;
		rshift_binary( a, 1, tmp );
		set_binary( a, tmp );
		rshift_binary( b, 1, tmp );
		set_binary( b, tmp );
	}
	if ( a[MAX_KETA_BINARY-1] == '0' )
		rshift_binary( a, 1, t );
	else
		sub_binary( zero, b, t );
	do {
		while( t[MAX_KETA_BINARY-1] == '0' ) {
			rshift_binary( t, 1, tmp );
			set_binary( t, tmp );
		}
		if ( cmp0_binary( t ) > 0 )
			set_binary( a, t );
		else
			sub_binary( zero, t, b );
		sub_binary( a, b, t );
	} while ( cmp0_binary( t ) != 0 );
	lshift_binary( a, k, dst );
}

void set_letter_pnum(int N, int L)
{
	int i;
	char decimal_tmp[MAX_KETA_DECIMAL+1];
	char a[MAX_KETA_BINARY+1];
	char b[MAX_KETA_BINARY+1];
	char tmp[MAX_KETA_BINARY+1];
	
	set_decimal( decimal_tmp, pandagram[0] );
	chg_to_binary( decimal_tmp, a );
	set_decimal( decimal_tmp, pandagram[1] );
	chg_to_binary( decimal_tmp, b );
	gcd_binary( a, b, tmp );
	set_decimal( decimal_tmp, pandagram[0] );
	chg_to_binary( decimal_tmp, a );
	div_binary( a, tmp, b );
	set_binary( letter_pnum[0], b );
	
	for ( i=1; i<=L; i++ ) {
		set_decimal( decimal_tmp, pandagram[i-1] );
		chg_to_binary( decimal_tmp, a );
		set_binary( b, letter_pnum[i-1] );
		div_binary( a, b, tmp );
		set_binary( letter_pnum[i], tmp );
	}
}

void set_pnum(int L)
{
	int i, j, exist;
	
	set_binary( pnum[0], letter_pnum[0] );
	pnum_ptr = 1;
	
	for ( i=1; i<=L; i++ ) {
		exist = 0;
		for ( j=0; j<pnum_ptr; j++ ) {
			if ( cmp_binary( letter_pnum[i], pnum[j] ) == 0 ) {
				exist = 1;
				j = pnum_ptr;
			}
		}
		if ( exist == 0 ) {
			set_binary( pnum[pnum_ptr], letter_pnum[i] );
			pnum_ptr++;
		}
	}
}

void sort_pnum()
{
	int i, j;
	char tmp[MAX_KETA_BINARY+1];
	
	for ( i=0; i<25; i++ ) {
		for ( j=i+1; j<26; j++ ) {
			if ( cmp_binary( pnum[i], pnum[j] ) > 0 ) {
				set_binary( tmp, pnum[i] );
				set_binary( pnum[i], pnum[j] );
				set_binary( pnum[j], tmp );
			}
		}
	}
}

void put_result(int case_num, int L)
{
	int i, j;
	char c;
	
	printf( "Case #%d: ", case_num );
	for ( i=0; i<=L; i++ ) {
		c = 'A';
		for ( j=0; j<26; j++ ) {
			if ( cmp_binary( letter_pnum[i], pnum[j] ) == 0 ) {
				printf( "%c", c );
				break;
			}
			c++;
		}
	}
	printf( "\n" );
}

int main()
{
	int T, N, L, i, j;
	char s[MAX_KETA_DECIMAL+1];

	init_memory();
	scanf( "%d", &T );
	for ( i=0; i<T; i++ ) {
		for ( j=0; j<101; j++ )
			set_binary( letter_pnum[j], "0" );
		for ( j=0; j<100; j++ )
			set_decimal( pandagram[j], "0" );
		for ( j=0; j<26; j++ )
			set_binary( pnum[j], "0" );
		scanf( "%d", &N );
		scanf( "%d", &L );
		for ( j=0; j<L; j++ ) {
			scanf( "%s", s );
			set_decimal( pandagram[j], s );
		}
		set_letter_pnum( N, L );
		set_pnum( L );
		sort_pnum();
		put_result( i+1, L );
	}
	free_memory();
}
