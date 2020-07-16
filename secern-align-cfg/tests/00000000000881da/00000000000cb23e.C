#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int TestCases,TestNo;
    scanf("%d",&TestCases);
    for (TestNo = 1; TestNo <= TestCases; TestNo++)
    {
        char * RivalPath;
        char * YourPath;
        int Grid;
        scanf("%d",&Grid);
        int Size = (2 * Grid - 2) + 1;
        RivalPath = (char *)calloc(Size,sizeof(char));

        if (RivalPath == NULL)
        {

        }
        else
        {
            fflush(stdin);
            scanf("%[^\n]%*c",RivalPath);
            *(RivalPath + (Size - 1)) = '\0';
            //printf("%s",RivalPath);

            YourPath = (char *) calloc (Size,sizeof(char));

            if (YourPath == NULL)
            {

            }
            else
            {
                int i;
                for (i = 0; i < (Size - 1); i++)
                {
                    if (*(RivalPath + i) == 'S')
                    {
                        *(YourPath + i) = 'E';
                    }
                    else
                    {
                        *(YourPath + i) = 'S';
                    }
                    
                }

                *(YourPath + (Size - 1)) = '\0';
                printf("Case #%d: %s\n",TestNo,YourPath);
            }
            
        }
        

    }
    return 0;
}