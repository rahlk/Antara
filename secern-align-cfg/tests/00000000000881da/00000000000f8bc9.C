#include <stdio.h>

int main()
{
    int nInputCnt = 0;
    int nBoxSize = 0;
    
//    int MazeCheck[10][10] = {0, };
    int Amaze[10][10] = {0, };
    int Bmaze[10][10] = {0, };
    
    int x = 0;
    int y = 0;
    
    scanf("%d", &nInputCnt);
    
    for(int i=0; i<nInputCnt; i++)
    {
        char strInputPath[1998];
        char strOutputPath[1998];
    
        int ax=0;
        int ay=0;
    
        int bx=0;
        int by=0;
    
        scanf("%d", &nBoxSize);
        scanf("%s", strInputPath);
        
        for(int j=0; j<(nBoxSize*2) - 2; j++)
        {
            if(j==0)
            {
                if(strInputPath[j] == 0x45)     // e
                {
                    ax++;
                    by++;
                    strOutputPath[j] = 0x53;
                }
                else
                {
                    // 0x53; //= s
                    ay++;
                    bx++;
                    strOutputPath[j] = 0x45;
                }
            }
            else
            {
                if(strInputPath[j] == 0x45)     // e
                {
                    ax++;
                    by++;
                    strOutputPath[j] = 0x53;
                }
                else
                {
                    // 0x53; //= s
                    ay++;
                    bx++;
                    strOutputPath[j] = 0x45;
                }
                if(j==(nBoxSize*2) - 3)
                {
                    strOutputPath[j + 1] = '\0';
                }
            }
           
        }
        if(ax==nBoxSize-1 && ay == nBoxSize-1)
        {
 //           printf("Case #%d: %s \n",strInputPath);
            printf("Case #%d: %s \n",i+1, strOutputPath);
        }
        
    }
    
    return 0;
}