#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdarg.h>
#include <math.h>
#include <time.h>
#include <sys/time.h>

#define LOG_ENABLED  0

#define DBG_ON  0
#define DBG_0   0
#define DBG_1   1
#define DBG_2   2
#define DBG_3   3

#define DEBUG_LEVEL  DBG_0

/*
 *
 */
#define LINE_MAX_LEN   (4 * 1024UL * 1024UL)

static char *line ;
static char *saved_ptr ;

#define MAX_ALPHABET    26
#define MAX_INTEGER 100000
#define MAX_CTEXT      200

struct PRIME_PAIR
{
    uint32_t a ;
    uint32_t b ;
};

struct TEST_CASE
{
    uint32_t max_integer ;
    uint32_t len_ctext ;
    uint32_t ctext[MAX_CTEXT] ;
    char     ptext[MAX_CTEXT] ;
    uint32_t prime_table[MAX_ALPHABET] ;
    struct PRIME_PAIR prime_pair[MAX_CTEXT] ;
};

/*
 *
 */
int debug_level = DEBUG_LEVEL ;

#define PRINT_STRING_LENGTH 512
static char chPrintBuffer[PRINT_STRING_LENGTH] ;

#if LOG_ENABLED
static FILE *fp = NULL ;
static int file_size = 0 ;
#endif

static uint32_t num_of_prime_numbers = 0 ;
uint32_t prime_number[MAX_INTEGER + 1] =
{
    2,  
    3,   /* A */
    5,   /* B */
    7,   /* C */ 
    11,  /* D */
    13,  /* E */
    17,  /* F */
    19,  /* G */
    23,  /* H */
    29,  /* I */
    31,  /* J */
    37,  /* K */ 
    41,  /* L */
    43,  /* M */
    47,  /* N */
    53,  /* O */
    59,  /* P */
    61,  /* Q */
    67,  /* R */
    71,  /* S */
    73,  /* T */
    79,  /* U */
    83,  /* V */
    89,  /* W */
    97,  /* X */
    101, /* Y */
    103, /* Z */
    107, 109, 
    113, 127, 131, 137, 139, 
    149, 151, 157, 163, 167, 
    173, 179, 181, 191, 193, 
    197, 199, 211, 223, 227, 
    229, 233, 239, 241, 251, 
    257, 263, 269, 271, 277, 
    281, 283, 293, 307, 311, 
    313, 317, 331, 337, 347, 
    349, 353, 359, 367, 373, 
    379, 383, 389, 397, 401, 
    409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, 1009, 1013, 1019, 1021, 1031, 1033, 1039, 1049, 1051, 1061, 1063, 1069, 1087, 1091, 1093, 1097, 1103, 1109, 1117, 1123, 1129, 1151, 1153, 1163, 1171, 1181, 1187, 1193, 1201, 1213, 1217, 1223
};

/*
 *
 */
static unsigned int num_cases = 0 ;
static struct TEST_CASE test_case ;

/*
 *
 */
void try_hcut(void);
void try_vcut(void);

/*
 *
 */
void debug_print(int level, char *fmt, ...)
{
#if LOG_ENABLED
    va_list pvar ;
    int len ;

    va_start(pvar, fmt);
    vsnprintf(chPrintBuffer, sizeof(chPrintBuffer)-1, fmt, pvar);
    va_end(pvar);
    
    if(0 == level)
    {
        printf("%s", chPrintBuffer);
        fflush(stdout);
    }

    if(NULL == fp)
    {
        fp = fopen("log.txt", "w");
    }   
     
    if(file_size < 3000000)
    {       
        fprintf(fp, "%s", chPrintBuffer);
        fflush(fp);
        len = strlen(chPrintBuffer);
        file_size += len ;    
    }
#else
    va_list pvar ;

    if(debug_level >= level)
    {
        va_start(pvar, fmt);
        vsnprintf(chPrintBuffer, sizeof(chPrintBuffer)-1, fmt, pvar);
        va_end(pvar);
        printf("%s", chPrintBuffer);
        fflush(stdout);
    }
#endif
}

// A utility function to swap two elements 
void swap(uint32_t *a, uint32_t *b) 
{ 
    uint32_t t ; 

    t = *a; 
    *a = *b; 
    *b = t; 
} 
  
/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
   array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
long int partition(uint32_t arr[], int32_t low, int32_t high) 
{ 
    uint32_t pivot ;
    int32_t  i ;
    int32_t  j ;
  
    pivot = arr[high];    // pivot 
    i = (low - 1);  // Index of smaller element 
    for (j = low; j <= (high - 1) ; j++) 
    { 
        // If current element is smaller than or 
        // equal to pivot 
        if (arr[j] <= pivot) 
        { 
            i++;    // increment index of smaller element 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
/* The main function that implements QuickSort 
   arr[] --> Array to be sorted, 
   low  --> Starting index, 
   high  --> Ending index */
void quickSort(uint32_t arr[], int32_t low, int32_t high) 
{ 
    int32_t pi ; 

    if (low < high) 
    { 
        /* pi is partitioning index, arr[p] is now 
           at right place */
        pi = partition(arr, low, high); 
  
        // Separately sort elements before 
        // partition and after partition 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

void init_prime_numbers(uint32_t *prime_number)
{
    uint32_t *primes ;
    uint32_t index ;
    uint32_t i ;
    uint32_t j ;

    for(i = 0 ; i < MAX_INTEGER ; i++)
    {	    
        prime_number[i] = 0 ;
    }

    primes = malloc(sizeof(uint32_t) * (MAX_INTEGER + 1));

    // populating array with naturals numbers
    for(i = 2; i <= MAX_INTEGER ; i++)
    {	    
        primes[i] = i ;
    }

    i = 2 ;
    while ((i*i) <= MAX_INTEGER)
    {
        if (primes[i] != 0)
        {
            for(j = 2 ; j < MAX_INTEGER ; j++)
            {
                if((primes[i] * j) > MAX_INTEGER)
                {
                    break;
                }
                else
                {
                    // Instead of deleteing , making elemnets 0
                    primes[primes[i]*j] = 0 ;
		}
            }
        }
        i++ ;
    }

    index = 0 ;
    num_of_prime_numbers = 0 ;
    for(i = 2; i <= MAX_INTEGER ; i++)
    {
        // If number is not 0 then it is prime
        if(primes[i] != 0)
        {
            prime_number[index] = primes[i] ;
	    index++ ;
	}
    }
    num_of_prime_numbers = index ;

#if (DEBUG_LEVEL >= DBG_1)
    for(i = 0 ; i < num_of_prime_numbers ; i++)
    {
	debug_print(DBG_1, "%u\r\n", prime_number[i]);
    }
#endif

    free(primes);
}

char get_alphabet(uint32_t number)
{
    uint32_t i ;

    for(i = 0 ; i < MAX_ALPHABET ; i++)
    {
	if(number == test_case.prime_table[i])
        {
            return('A' + i);
        }
    }

    return('A');
}

void add_to_prime_pair(uint32_t index, uint32_t a, uint32_t b)
{
    if(index < MAX_CTEXT)
    {
	test_case.prime_pair[index].a = a ;
	test_case.prime_pair[index].b = b ;
    }
}

void print_prime_pair(void)
{
#if (DEBUG_LEVEL >= DBG_1)
    uint32_t i ;

    for(i = 0 ; i < test_case.len_ctext ; i++)
    {
	debug_print(DBG_1, "(%u, %u : %c, %c)\r\n", 
                    test_case.prime_pair[i].a, test_case.prime_pair[i].b,
                    get_alphabet(test_case.prime_pair[i].a), get_alphabet(test_case.prime_pair[i].b));
    }
#endif
}

void get_prime_factor(uint32_t product, uint32_t prime_used, uint32_t *a, uint32_t *b)
{
    uint32_t i ;
    uint32_t j ;

    *a = 2 ;
    *b = 2 ;

    if(0 == prime_used)
    {
        for(i = 0 ; i < num_of_prime_numbers ; i++)
        {    
            if(prime_number[i] > test_case.max_integer)
	    {
		continue ;
            }

            for(j = 0 ; j < num_of_prime_numbers ; j++)
            {
                if(prime_number[j] > test_case.max_integer)
	        {
		    continue ;
                }

                if(product == (prime_number[i] * prime_number[j]))
                {
		    *a = prime_number[i] ;
   		    *b = prime_number[j] ;
		    break ;
                }
	    }
        }
    }
    else
    {
        for(i = 0 ; i < num_of_prime_numbers ; i++)
        {
            if(product == (prime_used * prime_number[i]))
            {
		*a = prime_used ;
                *b = prime_number[i] ;
		 break ;
            }
        }	    
    }
}

void add_to_prime_table(uint32_t number)
{
    uint32_t i ;

    for(i = 0 ; i < MAX_ALPHABET ; i++)
    {
	if(number == test_case.prime_table[i])
        {
            return ;
        }
    }

    for(i = 0 ; i < MAX_ALPHABET ; i++)
    {
	if(0 == test_case.prime_table[i])
        {
            test_case.prime_table[i] = number ;
            return ;
        }
    }
}

void print_prime_table(void)
{
#if (DEBUG_LEVEL >= DBG_1)
    uint32_t i ;

    for(i = 0 ; i < MAX_ALPHABET ; i++)
    {
        debug_print(DBG_1, "prime for %c : %u\n", 'A' + i, test_case.prime_table[i]);
    }
#endif
}

uint32_t get_num_cases(void)
{
    uint32_t num ;

    fgets(line, LINE_MAX_LEN, stdin);
    num = strtoul(line, NULL, 10);
    debug_print(DBG_1, "number of cases = %u\n", num);

    return(num);
}

void read_test_case(void)
{
    char *s ;
    unsigned int i ;

    fgets(line, LINE_MAX_LEN, stdin);

    s = strtok_r(line, " \t", &saved_ptr);
    test_case.max_integer = strtoul(s, NULL, 10);

    s = strtok_r(NULL, " \t", &saved_ptr);
    test_case.len_ctext = strtoul(s, NULL, 10);

    memset(test_case.ctext, 0 , sizeof(test_case.ctext));

    fgets(line, LINE_MAX_LEN, stdin);
   
    for(i = 0 ; i < test_case.len_ctext ; i++)
    {
        if(0 == i)
        {
            s = strtok_r(line, " \t", &saved_ptr);
        }
        else
        {
            s = strtok_r(NULL, " \t", &saved_ptr);
        }

        if(NULL == s)
        {
            break ;
        }

        test_case.ctext[i] = strtoul(s, NULL, 10);
    }
}

void print_test_case(void)
{
#if (DEBUG_LEVEL >= DBG_1)
    unsigned int i ;

    debug_print(DBG_1, "\n");
    debug_print(DBG_1, "N=%u L=%u\n", test_case.max_integer, test_case.len_ctext);
    for(i = 0 ; i < test_case.len_ctext ; i++)
    {
        debug_print(DBG_1, "%u ", test_case.ctext[i]);
    }
    debug_print(DBG_1, "\n");
#endif    
}

void decode_ctext(void)
{
    char     char_a ;
    char     char_b ;
    char     char_c ;
    char     char_d ;
    char     char_used ;
    uint32_t index ;
    uint32_t i ;

    char_a = get_alphabet(test_case.prime_pair[0].a);
    char_b = get_alphabet(test_case.prime_pair[0].b);
    char_c = get_alphabet(test_case.prime_pair[1].a);
    char_d = get_alphabet(test_case.prime_pair[1].b);

    if((char_a == char_c) || (char_a == char_d))
    {
	test_case.ptext[0] = char_b ;
	test_case.ptext[1] = char_a ;
	char_used = char_a ;
    }	    
    else
    {
	test_case.ptext[0] = char_a ;
	test_case.ptext[1] = char_b ;
	char_used = char_b ;
    }

    index = 2 ;
    for(i = 1 ; i < test_case.len_ctext ; i++)
    {
	char_a = get_alphabet(test_case.prime_pair[i].a);
	char_b = get_alphabet(test_case.prime_pair[i].b);

	if(char_used == char_a)
        {
           test_case.ptext[index] = char_b ;
	   char_used = char_b ;
        }
        else
        {
           test_case.ptext[index] = char_a ;
	   char_used = char_a ;
        }

	index++ ;
    }
}

void solve_test_case(void)
{
#if (DEBUG_LEVEL >= DBG_1)
    clock_t  tick_start ;
    clock_t  tick_end ;
#endif    
    uint32_t a ;
    uint32_t b ;
    uint32_t i ;

    memset(test_case.ptext, ' ', sizeof(test_case.ptext));
    memset(test_case.prime_table, 0, sizeof(test_case.prime_table));
    memset(test_case.prime_pair, 0, sizeof(test_case.prime_pair));

    for(i = 0 ; i < test_case.len_ctext ; i++)
    {
#if (DEBUG_LEVEL >= DBG_1)
        tick_start = clock();
#endif

	get_prime_factor(test_case.ctext[i], 0, &a, &b);

#if (DEBUG_LEVEL >= DBG_1)
        tick_end = clock();
#endif

#if (DEBUG_LEVEL >= DBG_1)
	debug_print(DBG_1, "%s-%u %u = %u x %u, %u %u\r\n", 
                    __FUNCTION__, __LINE__, test_case.ctext[i], a, b, tick_start, tick_end);
#endif

 	add_to_prime_table(a);
  	add_to_prime_table(b);
        add_to_prime_pair(i, a, b);
    }

    quickSort(test_case.prime_table, 0, MAX_ALPHABET - 1); 
    print_prime_table();
    print_prime_pair();
    decode_ctext();
}

void print_answer(unsigned int case_number)
{
    uint32_t i ;

    printf("Case #%u: ", case_number);
    for(i = 0 ; i < (test_case.len_ctext + 1) ; i++)
    {
        printf("%c", test_case.ptext[i]);
    }
    printf("\r\n");
}

int main(int argc, char *argv[])
{
    uint32_t i ;

    line = malloc(LINE_MAX_LEN);
    if(NULL == line)
    {
        printf("%s-%u malloc() error\n", __FUNCTION__, __LINE__);
        exit(0);
    }

    init_prime_numbers(prime_number); 

    num_cases = get_num_cases();

    for(i = 0 ; i < num_cases ; i++)
    {
        read_test_case();
        print_test_case();
        solve_test_case();
        print_answer(i+1);
    }

    exit(0);
}

