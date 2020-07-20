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
            break;
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
        int j=1,k=2;
        aux = malloc(sizeof(char)*32);
        fgets (aux,30,stdin);
        value = atoi (aux);
        a = (value/2 +(value%2));
        b = value/2;
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
            char* half_string = malloc(sizeof(char)*32);
            sprintf(half_string,"%d",value/2);
            if (value_check(half_string))
              if ( ((value/2 +(value%2)) + (value/2)) == value)
                    check = 1;
            int h;
            if (value > 100000)
            {
              while (check != 1)
              {
                a = ( (value*(k-j)) / k) + (value*(k-j))%k;
                b = ( (value*j) / k);
                if ( value_check(a_string) && value_check(b_string))
                    check = 1;
                h = 1000;
                while (h>0)
                {
                  a+=value-(h%value);
                  b-=value-(h%value);
                  sprintf(a_string,"%d",a);
                  sprintf(b_string,"%d",b);
                  if ( value_check(a_string) && value_check(b_string))
                      check = 1;
                  else
                  {
                      a++;
                      b--;
                  }
                  h--;
                }
              }
            }
            else
            {
            while (check != 1)
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
            }}
            free(a_string);
            free(b_string);
            free(half_string);
            printf("Case #%d: %d %d\n",i+1,a,b);
            i++;
            check = 0;
        }
    }
    return 0;//sucess
}
