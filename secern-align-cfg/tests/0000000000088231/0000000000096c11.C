#include <stdio.h>

int main(int argc, char* argv[])
{

    int n;
    int wtf;

    char a[103];
    char b[103];

    wtf = scanf("%d\n", &n);
    //if (fgets(a, 103, stdin) == NULL) return 1;


    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int leadingspaces = 0;
        int bstarted = 0;


        if (fgets(a, 103, stdin) == NULL) return 1;
        
        while ((a[j] != '\n') && (a[j] != '\0'))

        {
            if (a[j] == '4')
            {
                a[j] = '3';
                b[j] = '1';
                bstarted = 1;
            }
            else 
            {
                if (bstarted == 1)
                {
                    b[j - leadingspaces] = '0';
                }
                else
                {
                    leadingspaces++;
                }
            }                
            j++;
        }
        a[j] = 0;
        b[j - leadingspaces] = 0;

        printf("Case #%d: %s %s\n", i + 1, a, b);

    }

}