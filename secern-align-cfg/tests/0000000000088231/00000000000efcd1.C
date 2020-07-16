#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int value_check(char*string)
{
    int r=1;
    while( (*string != '\0') && (*string != '\n') )
    {
        if (*string == '4')
        {
            r = 0;
        }
        string++;
    }

    return r;
}
int main()
{
    int check = 0,i=0,test_cases,value,a,b;
    char* aux = malloc(sizeof(char)*32);
    fgets (aux,30,stdin);
    test_cases = atoi(aux);

    while (i < test_cases)
    {
        aux = malloc(sizeof(char)*32);
        fgets (aux,30,stdin);
        value = atoi (aux);
        a = 0;
        b = value;
        if ( value_check(aux))
        {
            printf("Case #%d: %d\n",i+1,value);
            i++;
            check = 0;
        }
        else
        {
            char* a_string = malloc(sizeof(char)*32);
            char* b_string = malloc(sizeof(char)*32);
            while (!check)
            {
                sprintf(a_string,"%d",a);
                sprintf(b_string,"%d",b);
                if ( value_check(a_string) && value_check(b_string))
                    check = 1;
                else
                {
                    a++;
                    b--;
                }
            }

            printf("Case #%d: %d %d\n",i+1,a,b);
            i++;
            check = 0;
        }
    }
    return 0;//sucess
}
