#include <stdio.h>

int main(int argc, char* argv[])
{

    int n;

    char a[101];
    char b[101];

    scanf("%d", &n);
    fgets(a, 101, stdin);


    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int leadingspaces = 0;
        int bstarted = 0;


        fgets(a, 101, stdin);
        
        while (a[j] != '\n')
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