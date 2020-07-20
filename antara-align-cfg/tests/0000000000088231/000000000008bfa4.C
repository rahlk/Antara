#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    int testcases = 0;
    bool contains4 = true;
    int k = 0;
    unsigned long j = 0, length = 0;
    char sinput[200] = {0};
    unsigned long ioutput1 = 0, ioutput2 = 0;
    unsigned long subtract = 0;

    fscanf(stdin, "%d\n", &testcases);

    for (k = 0; k < testcases; k++)
    {
       fscanf(stdin, "%s\n", sinput);
       contains4 = true;
       length = strlen(sinput);
       subtract = (unsigned long)(pow(10, (double)(length - 1)));
       ioutput1 = strtoul(sinput, NULL, 10);
       ioutput2 = 0;
       while (true == contains4)
       {
           if (NULL == strchr(sinput,  '4'))
           {
               contains4 = false;
           }else
           {
               for (j = 0; j < length; j++)
               {
                   if ('4' == sinput[j])
                   {
                       ioutput2 += subtract;
                       ioutput1 -= subtract;
                       sprintf(sinput, "%lu", ioutput1);
                   }
                   subtract /= 10;
               }
           }
       }
       fprintf(stdout, "Case #%d: %lu %lu\n", k+1, ioutput1, ioutput2);
       fflush(stdout);
    }
    return 0;
}
