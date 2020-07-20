#include<stdio.h>
#include<math.h>

int main()
{
    int A;
    int B;
    int N;
    int end;
    printf("Enter two number which is not contain 4 in it's digits.\n");
    printf("But their sum contains 4 in it's digits.\n");
    /*when you enter number you cant enter 4 that the reason for 
    I use scanf*/
    scanf("%d"A);
    scanf("%d"B);
    N=A+B;
    printf("Total of jamcoins %d. \n"N);
    printf("If this number contains 4 in its digits enter 1.\n");
    printf("Otherwise enter 0\n");
    scanf("%d",&end);
    if(end==0)
    {
        while(end==0)
        {
        printf("Enter two number which is not contain 4 in it's digits.\n");
        printf("But their sum contains 4 in it's digits.\n");
        scanf("%d"A);
        scanf("%d"B);
        N=A+B;
        printf("Total of jamcoins %d. \n"N);
        printf("If this number contains 4 in its digits enter 1.\n");
        printf("Otherwise enter 0\n");
        scanf("%d",&end)
        }
    }
    else
    printf("You reached the jamcoins\n");
    
    return 0;
}