#include <stdio.h>
#include <string.h>

int main (void)
{
    int testcases = 0;
    int error = 0;
    int k = 0;
    unsigned long j = 0;
    int iinput = 0;
    int max_x = 0, max_y = 0;
    int dest_x = 0, dest_y = 0;
    int my_x = 0, my_y = 0;
    char my_moves[100005] = {0};
    int l_x = 0, l_y = 0;
    char l_moves[100005] = {0};

    error = fscanf(stdin, "%d\n", &testcases);

    for (k = 0; k < testcases; k++)
    {
        memset((void * )my_moves, 0, sizeof (my_moves));
        my_x = 0;
        my_y = 0;
        l_x = 0;
        l_y = 0;
        error = fscanf(stdin, "%d\n", &iinput);
        max_x = iinput;
        max_y = iinput;
        error = fscanf(stdin, "%s\n", l_moves);
        switch (l_moves[0])
        {
        case 'E':
            my_y++;
            l_x++;
            my_moves[0] = 'S';
            break;
        case 'S':
            l_y++;
            my_x++;
            my_moves[0] = 'E';
            break;
        default:
            break;
        }

        switch (l_moves[strlen(l_moves) - 1])
        {
        case 'E':
            dest_x = max_x;
            dest_y = max_y - 1;
            my_moves[strlen(l_moves) - 1] = 'S';
            break;
        case 'S':
            dest_x = max_x - 1;
            dest_y = max_y;
            my_moves[strlen(l_moves) - 1] = 'E';
            break;
        default:
            break;
        }

        if (iinput > 2)
        {
            for (j = 1; j < (strlen(l_moves) - 1); j++)
            {
                //try to travel in the x direction rather
                if ((dest_x - my_x) >= (dest_y - my_y))
                {
                    if('E' == l_moves[j])
                    {
                        l_x++;
                        if (((my_x + 1) != l_x) && (l_y == my_y))
                        {
                            my_moves[j] = 'E';
                            my_x++;
                        } else
                        {
                            my_y++;
                            my_moves[j] = 'S';
                        }
                    }
                    else
                    {
                        l_y++;
                        if (((my_y + 1) != l_y) && (l_x == my_x))
                        {
                            my_moves[j] = 'S';
                            my_y++;
                        } else
                        {
                            my_x++;
                            my_moves[j] = 'E';
                        }
                    }
                } else
                {
                    if('S' == l_moves[j])
                    {
                        l_y++;
                        if (((my_y + 1) != l_y) && (l_x == my_x))
                        {
                            my_moves[j] = 'S';
                            my_y++;
                        } else
                        {
                            my_x++;
                            my_moves[j] = 'E';
                        }
                    }
                    else
                    {
                        l_x++;
                        if (((my_x + 1) != l_x) && (l_y == my_y))
                        {
                            my_moves[j] = 'E';
                            my_x++;
                        } else
                        {
                            my_y++;
                            my_moves[j] = 'S';
                        }
                    }
                }
            }
        }

        fprintf(stdout, "Case #%d: %s\n", k+1, my_moves);
        fflush(stdout);
    }
    if (error) {}
    return 0;
}
