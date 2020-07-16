#include<stdio.h>

int main(void)
{
    int testCases = 0;
    
    scanf(" %d", &testCases);
    
    int i = 0;
    for(i=1; i<=testCases; i++)
    {
        int num = 0;
        scanf(" %d", &num);
        int A =0, B=0;
        
        A = num/2;
        B = num/2;
        
        printf("Case #%d: %d %d\n", i,A,B);
        
    }
    
    return 0;
}