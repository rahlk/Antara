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
#define LINE_MAX_LEN   (1 * 1024UL * 1024UL)

static char *line ;
static char *saved_ptr ;

#define MAX_MAZE_SIZE  50000UL
#define MAX_MAZE_PATH  ((2 * MAX_MAZE_SIZE) - 2)

#define MOVE_NONE  0  
#define MOVE_EAST  1
#define MOVE_SOUTH 2

struct MAZE_PATH
{
    uint32_t x ;
    uint32_t y ;
    uint8_t  dir ;
};

struct TEST_CASE
{
    uint32_t maze_size ;
    int      path_found ;
    int      new_index ;
    struct MAZE_PATH old_path[MAX_MAZE_PATH] ;
    struct MAZE_PATH new_path[MAX_MAZE_PATH] ;
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

char *get_dir_string(uint8_t dir)
{
    if(MOVE_EAST == dir)
    {
       return("E");
    }

    if(MOVE_SOUTH == dir)
    {
       return("S");
    }
       
    return(" ");
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
    uint32_t x ;
    uint32_t y ;
    uint32_t len ;
    uint32_t index ;
    uint32_t i ;

    /*
     * 
     */
    fgets(line, LINE_MAX_LEN, stdin);

    s = strtok_r(line, " \r\n\t", &saved_ptr);
    test_case.maze_size = strtoul(s, NULL, 10);

    /*
     * 
     */
    fgets(line, LINE_MAX_LEN, stdin);
    s = strtok_r(line, " \r\n\t", &saved_ptr);

    test_case.path_found = 0 ;
    test_case.old_path[0].x = 0 ;
    test_case.old_path[0].y = 0 ;
    x = 0 ;
    y = 0 ;

    len = strlen(s);
    index = 0 ;
    for(i = 0 ; i < len ; i++)
    {
        if(index >= MAX_MAZE_PATH)
        {
            break ;
        }

        if('E' == s[i])
        {
            test_case.old_path[index].x = x ;
            test_case.old_path[index].y = y ;
            test_case.old_path[index].dir = MOVE_EAST ;
            x++ ;
            index++ ;
        }
        else
        if('S' == s[i])
        {
            test_case.old_path[index].x = x ;
            test_case.old_path[index].y = y ;
            test_case.old_path[index].dir = MOVE_SOUTH ;
            y++ ;
            index++ ;
        }
        else
        {
            test_case.old_path[index].dir = 0 ;
        }
    }
}

void print_log(const char *func_name, uint32_t line, uint32_t x, uint32_t y, uint8_t dir, char *msg)
{
    if(0 < dir)
    {
        debug_print(DBG_2, "%s-%u (%u,%u,%s) %s\r\n", func_name, line, x, y, get_dir_string(dir), msg);
    }
    else
    {
        debug_print(DBG_2, "%s-%u (%u,%u) %s\r\n", func_name, line, x, y, msg);
    }
}

int check_used_path(uint32_t x, uint32_t y, uint8_t dir)
{
    uint32_t num_path ;
    uint32_t i ;

    num_path = (2 * test_case.maze_size) - 2 ;
    for(i = 0 ; (i < num_path) && (i < MAX_MAZE_PATH) ; i++)
    {
        if((x == test_case.old_path[i].x) && (y == test_case.old_path[i].y))
        {
           if(dir == test_case.old_path[i].dir)
           {
               return(-1);
           }
        }  
    }

    return(0);
}

#if (DEBUG_LEVEL >= DBG_1)
void compare_path(void)
{
    uint32_t num_path ;
    uint32_t i ;

    num_path = (2 * test_case.maze_size) - 2 ;
    for(i = 0 ; i < num_path ; i++)
    {
        if(check_used_path(test_case.new_path[i].x, test_case.new_path[i].y, test_case.new_path[i].dir) < 0)
        {
            printf("path compare error at (%u,%u,%u)\r\n", 
                   test_case.new_path[i].x, test_case.new_path[i].y, test_case.new_path[i].dir);
        }
    }
}
#endif

#if (DEBUG_LEVEL >= DBG_1)
void print_path(uint32_t maze_size, struct MAZE_PATH *maze_path)
{
#define SMALL_MAZE_SIZE 32     
    static uint8_t maze[SMALL_MAZE_SIZE][SMALL_MAZE_SIZE] ;    
    uint32_t num_path ;
    uint32_t  x ; 
    uint32_t  y ; 
    uint32_t  i ; 

    if(maze_size < SMALL_MAZE_SIZE)
    {
        memset(maze, 0, sizeof(maze));

        x = 0 ;
        y = 0 ;
        maze[x][y] = 1 ;

        num_path = (2 * maze_size) - 2 ;
        for(i = 0 ; i < num_path ; i++)
        {
            if(MOVE_EAST == maze_path[i].dir)
            {
                x++ ;
            }
            else
            if(MOVE_SOUTH == maze_path[i].dir)
            {
                y++ ;
            }

            if((x < SMALL_MAZE_SIZE) && (y < SMALL_MAZE_SIZE))
            {
                maze[x][y] = 1 ;
            }            
        }
    }

    printf("\r\n");
    for(y = 0 ; y < maze_size ; y++)
    {
        for(x = 0 ; x < maze_size ; x++)
        {
            printf("----");
        }
        printf("-");
        printf("\r\n");

        for(x = 0 ; x < maze_size ; x++)
        {
            if(maze[x][y] > 0)
            {
                printf("| * ");
            }
            else
            {
                printf("|   ");
            }
        }
        printf("|\r\n");
    }

    for(x = 0 ; x < maze_size ; x++)
    {
        printf("----");
    }
    printf("-");
    printf("\r\n");
}
#endif

void print_test_case(void)
{
    uint32_t num_path ;
    uint32_t i ;

    debug_print(DBG_1, "\n");
    debug_print(DBG_1, "N=%u\n", test_case.maze_size);

    num_path = (2 * test_case.maze_size) - 2 ;
    for(i = 0 ; (i < num_path) && (i < MAX_MAZE_PATH) ; i++)
    {
        if(MOVE_EAST == test_case.old_path[i].dir)
        {
            debug_print(DBG_1, "E");
        }
        else
        if(MOVE_SOUTH == test_case.old_path[i].dir)
        {
            debug_print(DBG_1, "S");
        }
        else
        {
            debug_print(DBG_1, " ");
        }
    }

#if (DEBUG_LEVEL >= DBG_1)
    print_path(test_case.maze_size, test_case.old_path);
#endif    

#if 0
    debug_print(DBG_1, " ");
    for(i = 0 ; (i < num_path) && (i < MAX_MAZE_PATH) ; i++)
    {
        debug_print(DBG_1, "(%u,%u,", test_case.old_path[i].x, test_case.old_path[i].y);
        if(MOVE_EAST == test_case.old_path[i].dir)
        {
            debug_print(DBG_1, "E");
        }
        else
        if(MOVE_SOUTH == test_case.old_path[i].dir)
        {
            debug_print(DBG_1, "S");
        }
        else
        {
            debug_print(DBG_1, " ");
        }
        debug_print(DBG_1, ") ");
    }
#endif    
    debug_print(DBG_1, "\n");
}

/*
 *  
 */ 
void find_maze_path(uint32_t x, uint32_t y, int used_path)
{
    uint32_t new_x ;
    uint32_t new_y ;
    uint8_t  dir ;
    uint32_t i ;

    /*
     *  check if it is used path
     */        
    if(used_path) 
    {
        print_log(__FUNCTION__, __LINE__, x, y, 0, "got here by used path");
        if(test_case.new_index > 0)
        {
           test_case.new_index-- ;
        }
        return ;
    }

    /*
     *  check if reached the destination
     */        
    if((MAX_MAZE_SIZE - 1) <= x) 
    {
        if((MAX_MAZE_SIZE - 1) <= y) 
        {
            print_log(__FUNCTION__, __LINE__, x, y, 0, "path found");
            test_case.path_found = 1 ;
            return ;
        }
    }

    if((test_case.maze_size - 1) <= x) 
    {
        if((test_case.maze_size - 1) <= y) 
        {
            print_log(__FUNCTION__, __LINE__, x, y, 0, "path found");
            test_case.path_found = 1 ;
            return ;
        }            
    }

    /*
     *  check if it is out of maze
     */        
    if(test_case.maze_size <= x) 
    {
        print_log(__FUNCTION__, __LINE__, x, y, 0, "out of maze");
        if(test_case.new_index > 0)
        {
           test_case.new_index-- ;
        }
        return ;
    }

    if(test_case.maze_size <= y) 
    {
        print_log(__FUNCTION__, __LINE__, x, y, 0, "out of maze");
        if(test_case.new_index > 0)
        {
           test_case.new_index-- ;
        }
        return ;
    }

    /*
     *  try next path
     */        
    for(i = 0 ; i < 2 ; i++)
    {
        if(0 == test_case.path_found)
        {
            if(0 == i)
            {
                dir = MOVE_EAST ;
            }
            else
            {
                dir = MOVE_SOUTH ;
            }

            if(check_used_path(x, y, dir) < 0)
            {
                print_log(__FUNCTION__, __LINE__, x, y, dir, "used path");
                used_path = 1 ;
            }
            else
            {
                used_path = 0 ;
            }

            if(test_case.new_index < MAX_MAZE_PATH)
            {
                test_case.new_path[test_case.new_index].x   = x ;
                test_case.new_path[test_case.new_index].y   = y ;
                test_case.new_path[test_case.new_index].dir = dir ;
                test_case.new_index++ ;
            }

            if(MOVE_EAST == dir)
            {
                new_x = x + 1 ;
                new_y = y ;
            }
            else
            if(MOVE_SOUTH == dir)
            {
                new_x = x ;
                new_y = y + 1 ;
            }

            print_log(__FUNCTION__, __LINE__, new_x, new_y, 0, "try next path");

            find_maze_path(new_x, new_y, used_path);
        }
    }
}

void solve_test_case(void)
{
    uint32_t x ;
    uint32_t y ;
    int used_path ;

    test_case.path_found = 0 ;
    test_case.new_index  = 0 ;

    x = 0 ;
    y = 0 ;
    used_path = 0 ;
    find_maze_path(x, y, used_path);
}

void print_answer(unsigned int case_number)
{    
    uint32_t num_path ;
    uint32_t i ;

#if (DEBUG_LEVEL >= DBG_1)
    print_path(test_case.maze_size, test_case.new_path);
    compare_path();
#endif    

    printf("Case #%u: ", case_number);

    num_path = (2 * test_case.maze_size) - 2 ;
    for(i = 0 ; i < num_path ; i++)
    {
        if(MOVE_EAST == test_case.new_path[i].dir)
        {
            printf("E");
        }
        else
        {
            printf("S");
        }
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

