#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdarg.h>
#include <math.h>

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

#define MAX_DIGITS  200
struct TEST_CASE
{
    char n_coins[MAX_DIGITS + 1] ;
    char a_coins[MAX_DIGITS + 1] ;
    char b_coins[MAX_DIGITS + 1] ;
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

/*
 *
 */
static unsigned int num_cases = 0 ;
static struct TEST_CASE test_case ;

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

    fgets(line, LINE_MAX_LEN, stdin);

    s = strtok_r(line, " \r\n\t", &saved_ptr);
    strncpy(test_case.n_coins, s, sizeof(test_case.n_coins) - 1);
}

void print_test_case(void)
{
    debug_print(DBG_1, "\n");
    debug_print(DBG_1, "%s\n", test_case.n_coins);
}

void solve_test_case(void)
{
    char temp_coins[MAX_DIGITS + 1] ;
    int leading_zero ;
    uint32_t len ;    
    uint32_t index ;
    uint32_t i ;

    memset(test_case.a_coins, 0, sizeof(test_case.a_coins));
    memset(test_case.b_coins, 0, sizeof(test_case.b_coins));

    len = strlen(test_case.n_coins);
    for(i = 0 ; i < len ; i++)
    {
        if('4' == test_case.n_coins[i])
        {
            test_case.a_coins[i] = '2' ;
            test_case.b_coins[i] = '2' ;
        }
        else
        {
            test_case.a_coins[i] = test_case.n_coins[i] ;
            test_case.b_coins[i] = '0' ;
        }
    }

    leading_zero = 1 ;
    memset(temp_coins, 0, sizeof(temp_coins));
    index = 0 ;
    len = strlen(test_case.b_coins);
    for(i = 0 ; i < len ; i++)
    {
        if(leading_zero)
        {
            if('0' != test_case.b_coins[i])
            {
                leading_zero = 0 ;
                temp_coins[index] = test_case.b_coins[i] ;
                index++ ;
            }
        }
        else
        {
            temp_coins[index] = test_case.b_coins[i] ;
            index++ ;
        }
    }

    strncpy(test_case.b_coins, temp_coins, sizeof(test_case.b_coins) - 1);
}

void print_answer(unsigned int case_number)
{   
    printf("Case #%u: %s %s\n", case_number, test_case.a_coins, test_case.b_coins);
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

