#include <stdio.h>
#include <string.h>
int main (void)
{
    int TestCases;
    int TestNo;
    scanf("%d",&TestCases);
    for (TestNo = 1; TestNo <= TestCases; TestNo++)
    {
        char RivalPath[800000];
        char YourPath[800000];
        int Grid;
        scanf("%d",&Grid);
        //fflush(stdin);
        //while ((getchar()) != '\n');
        scanf("%s",RivalPath);
        // while ((getchar()) != '\n');
        int StringLength = strlen(RivalPath);
        //printf("%d",StringLength);

        int i;
        for (i = 0; i < StringLength; i++)
        {
            if (RivalPath[i] == 'E')
            {
                YourPath[i] = 'S';
            }
            else if (RivalPath[i] == 'S')
            {
                YourPath[i] = 'E';
            }
            
        }
        YourPath[StringLength] = '\0';
        if (TestCases == TestNo)
        {
            printf("Case #%d: %s",TestNo,YourPath);
        }
        else
        {
            printf("Case #%d: %s\n",TestNo,YourPath);
        }
        

    }
    return 0;
}