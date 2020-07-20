#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE  1

#define MAX_ROWS 15

/* If a move splits a board into 2 sub-boards with
 * win_1 and win_2 winning moves, respectively, is
 * this move a winning move?
 */
int is_win( int wins_1, int wins_2 )
{
    int result;
    result =  ( wins_1 && wins_2 ) || ( !wins_1 && !wins_2 );

    return result ? 1 : 0;
}

/* Returns n wins if game is a win, else return 0 */
int solve_rec( char* grid, int rows, int cols, int row_offset )
{
    int r, c;
    int win_count;
    int rad_free;
    int s1, s2;

    //printf("grid=%x, rows=%d, cols=%d, offset=%d\n", (int)grid, rows, cols, row_offset);

    /* Base case. Losing board if there are no moves */
    if( rows == 0 || cols == 0 )
        return 0;

    /* Initialize win_count */
    win_count = 0;

    /* iterate through all rows, looking for a valid H move */
    for( r = 0; r < rows; ++r )
    {
        rad_free = TRUE;
        for( c = 0; c < cols; ++c )
            if( grid[ r*row_offset + c ] == '#' )
                rad_free = FALSE;
        if( rad_free == TRUE )
        {
            s1 = solve_rec( &(grid[    0 *row_offset + 0 ]),        r, cols, row_offset );
            s2 = solve_rec( &(grid[ (r+1)*row_offset + 0 ]), rows-r-1, cols, row_offset );
            win_count += cols*is_win( s1, s2 );
        }
    }

    /* iterate through all cols, looking for a valid V move */
    for( c = 0; c < cols; ++c )
    {
        rad_free = TRUE;
        for( r = 0; r < cols; ++r )
            if( grid[ r*row_offset + c ] == '#' )
                rad_free = FALSE;
        if( rad_free == TRUE )
        {
            s1 = solve_rec( &(grid[ 0*row_offset     + 0 ]), rows,        c, row_offset );
            s2 = solve_rec( &(grid[ 0*row_offset + c + 1 ]), rows, cols-c-1, row_offset );
            win_count += rows*is_win( s1, s2 );
        }
    }

    return win_count;
}

int solve( char* grid, int rows, int cols )
{
    return solve_rec( grid, rows, cols, cols );
}

int main(int argc, char** argv)
{
    int T, R, C;
    int t, r, c;
    char scan_in[MAX_ROWS + 1];
    char* grid = NULL;

    scanf( "%d", &T );

    for( t = 0; t < T; ++t )
    {
        scanf( "%d %d", &R, &C );
        grid = (char *)malloc( R * C * sizeof(char) );

        /* Scan in grid */
        for( r = 0; r < R; ++r )
        {
            scanf("%s", scan_in);
            for( c = 0; c < C; ++c )
            {
                grid[ r*C + c ] = scan_in[c];
            }
        }
        printf( "Case #%d: %d\n", t+1, solve( grid, R, C ) );
        free( grid );
    }

    return 0;
}
