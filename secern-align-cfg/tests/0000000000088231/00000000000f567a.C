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
    char* a_string;
    char* b_string;
    char* half_string;

    while (i < test_cases)
    {
        aux = malloc(sizeof(char)*32);
        fgets (aux,30,stdin);
        value = atoi (aux);
        a = (value/2 +(value%2));
        b = value/2;

        a_string = malloc(sizeof(char)*32);
        b_string = malloc(sizeof(char)*32);
        half_string = malloc(sizeof(char)*32);

        sprintf(half_string,"%d",value/2);
        if (value_check(half_string))
          if ( a+b == value)
                check = 1;

        int j=1,k=2;

        if (value < 100000000)
        {
          sprintf(a_string,"%d",a);
          sprintf(b_string,"%d",b);
          while (a+b != value)
          {
            if (a+b < value)
              a++;
            else
              a--;
          }
          if ( value_check(a_string) && value_check(b_string))
              check = 1;
          else
          {
              a++;
              b--;
          }
          free(a_string);
          free(b_string);
          free(half_string);
          printf("Case #%d: %d %d\n",i+1,a,b);
          i++;
          check = 0;
        }
        else
        {
          while (check != 1)
          {
              while (j <= (k-1))
              {
                a = ( (value*(k-j)) / k) + (value*(k-j))%k;
                b = ( (value*j) / k);
                while (a+b != value)
                {
                  if (a+b < value)
                  {
                    if (a < value)
                      a++;
                    else
                      b++;
                  }
                  else
                  {
                    if (b > 0)
                      b--;
                    else
                      a--;
                  }
                }
                j++;
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
            j = 0;
            k++;
          }
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
