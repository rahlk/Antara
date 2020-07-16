///
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int test_case_number, test_case=1;

void function_name()
{
    char string[255][500];
    int r_checker[500],s_checker[500],p_checker[500],i,j, number_of_other_robots, will_it_terminate =0;
    char s[500];
    scanf("%d ", &number_of_other_robots);
    int end_index[number_of_other_robots], end_index_found[number_of_other_robots];
    for(i=0;i<500;i++)
    {

        r_checker[i] = 0;
        s_checker[i] = 0;
        p_checker[i] = 0;

    }
    for(i=0;i<number_of_other_robots;i++)
    {
        end_index_found[i] =0;
        end_index [i]= 500;
    }
    for(i=0; i<number_of_other_robots;i++)
    {
        scanf("%s", s);
        strcpy(string[i], s);
    }
    printf("Case #%d: ",test_case);
    for(i=0;i<500;i++)
    {
        for(j=0;j<number_of_other_robots;j++)
        {
            if(string[j][i] == '\0')
            {
                end_index[j] = i;
            }
        }
        for(j=0;j<number_of_other_robots;j++)
        {

            if(string[j][i%end_index[j]] == 'R')
            {
                r_checker[i] = 1;
            }
            else if(string[j][i%end_index[j]] == 'S')
            {
                s_checker[i] = 1;
            }
            else if(string[j][i%end_index[j]] == 'P')
            {
                p_checker[i] = 1;
            }

        }
    }
    for(i=0;i<500;i++)
    {
        if(p_checker[i] ==1 && r_checker[i] ==1 && s_checker[i] ==1)
        {
            printf("IMPOSSIBLE\n");
            return;
        }
        if(p_checker[i] ==0 && r_checker[i] ==0 && s_checker[i] ==1)
        {
            will_it_terminate =1;
        }
        else if(p_checker[i] ==1 && r_checker[i] ==0 && s_checker[i] ==0)
        {
            will_it_terminate =1;
        }
        else if(p_checker[i] ==0 && r_checker[i] ==1 && s_checker[i] ==0)
        {
            will_it_terminate =1;
        }


    }
    if(will_it_terminate == 0)
    {
        printf("IMPOSSIBLE\n");
        return;
    }
//    printf("p_checker = %d", p_checker);
//    printf("s_checker = %d", s_checker);
//    printf("r_checker = %d", r_checker);
    for(i=0;i<500;i++)
    {
            if(p_checker[i]==1 && r_checker[i] ==1)
            {
                printf("P");
            }
            else if(p_checker[i] ==1 && s_checker[i] ==1)
            {
                printf("S");
            }
            else if(r_checker[i] ==1 && s_checker[i] ==1)
            {
                printf("R");
            }
            else if(p_checker[i] == 1)
            {
                printf("S\n");
                return;
            }
            else if(s_checker[i] ==1)
            {
                printf("R\n");
                return;
            }
            else if(r_checker[i] ==1)
            {
                printf("P\n");
                return;
            }

    }
    /*

            if(p_checker ==1 && r_checker ==1 && s_checker ==1)
            {
                printf("IMPOSSIBLE\n");
                return;
            }
            else if(p_checker==1 && r_checker ==1)
            {
                printf("P");
            }
            else if(p_checker ==1 && s_checker ==1)
            {
                printf("S");
            }
            else if(r_checker ==1 && s_checker ==1)
            {
                printf("R");
            }
            else if(p_checker == 1)
            {
                printf("S");
            }
            else if(s_checker ==1)
            {
                printf("R");
            }
            else if(r_checker ==1)
            {
                printf("S");
            }

*/

}

int main()
{
    scanf("%d", &test_case_number);
    while(test_case <= test_case_number)
    {

        function_name();
        test_case++;
    }
    return 0;
}


