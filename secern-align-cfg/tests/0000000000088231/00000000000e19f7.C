#include<stdio.h>

int main(void)
{
    int testCases = 0;
    scanf(" %d", &testCases);
    int j = 0;
    for(j=1; j<=testCases; j++)
    {
        int i = 0;
        int num = 0;
        scanf(" %d", &num);
        int copynum = num;
        int numToAdd = 0;
        int A =0, B=0;
        int numLoopRun = 1;
        int whileCounter = 0;
    
        while(copynum != 0)
        {
            whileCounter++;
            if(whileCounter == 1)
            {
                numLoopRun = 1;
            }
            else
            {
                numLoopRun *= 10;
            }
    
            if(copynum % 10 == 4)
            {
                numToAdd += (numLoopRun * 2);
            }
            copynum = copynum/10;
        }
        
         A = num - numToAdd;
         B = numToAdd;
    
         printf("Case #%d: %d %d\n", j,A,B);
    }

    return 0;
}
