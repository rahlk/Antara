#include <stdio.h>
#include <stdlib.h>
int test_case_number, test_case=1;
int array [4][4] = {{2,3,4,5},{2,3,4,5}};
int two_five[2+1][2*5+1] = {{0,0,0,0,0,0,0,0,0,0,0},{0,2,1,2,1,2,1,2,1,2,1},{0,3,1,4,2,5,3,1,5,2,4}};
int three_five [2+1][3*5+1] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,3,2,1,3,2,1,2,3,2,1,3,2,1,3},{0,3,2,4,2,1,3,1,5,3,1,5,4,2,4,5}};
int four_four [2+1] [4*4+1] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,2,4,3,1,2,4,3,2,1,3,4,2,1,3,4},{0,1,3,4,2,3,1,2,4,2,4,3,1,4,2,1,3}};
int three_four [2+1][3*4+1] = {{0,0,0,0,0,0,0,0,0,0,0,0,0},{0,1,2,3,1,2,3,1,3,2,1,3,2},{0,1,3,1,4,2,4,3,2,4,2,3,1}};
int pylons()
{
    int row, column, i, j;
    scanf("%d %d", &row, &column);
    if(row ==2 && column == 5)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=2*5;j++)
        {
            printf("%d %d\n", two_five[i][j],two_five[i+1][j]);
        }
    }
    else if(row ==5 && column == 2)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=2*5;j++)
        {
            printf("%d %d\n", two_five[i+1][j],two_five[i][j]);
        }
    }
    else if(row ==3 && column == 5)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=3*5;j++)
        {
            printf("%d %d\n", three_five[i][j],three_five[i+1][j]);
        }
    }
    else if(row ==5 && column == 3)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=3*5;j++)
        {
            printf("%d %d\n", three_five[i+1][j],three_five[i][j]);
        }
    }
    else if(row ==4 && column == 4)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=4*4;j++)
        {
            printf("%d %d\n", four_four[i][j],four_four[i+1][j]);
        }
    }
    else if(row ==4 && column == 5)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=2*5;j++)
        {
            printf("%d %d\n", two_five[i][j],two_five[i+1][j]);
        }
        for(i=1,j=1; j<=2*5;j++)
        {
            printf("%d %d\n", 2+two_five[i][j],two_five[i+1][j]);
        }

    }
    else if(row ==5 && column == 4)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=2*5;j++)
        {
            printf("%d %d\n", two_five[i+1][j],two_five[i][j]);
        }
        for(i=1,j=1; j<=2*5;j++)
        {
            printf("%d %d\n", two_five[i+1][j],2+two_five[i+1][j]);
        }

    }
    else if(row ==5 && column == 5)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=2*5;j++)
        {
            printf("%d %d\n", two_five[i][j],two_five[i+1][j]);
        }
        for(i=1,j=1; j<=3*5;j++)
        {
            printf("%d %d\n", 2+three_five[i][j],three_five[i+1][j]);
        }

    }
    else if(row ==3 && column == 4)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=3*4;j++)
        {
            printf("%d %d\n", three_four[i][j],three_four[i+1][j]);
        }
    }
    else if(row ==4 && column == 3)
    {
        printf("Case #%d: POSSIBLE\n", test_case);
        for(i=1,j=1; j<=3*4;j++)
        {
            printf("%d %d\n", three_four[i+1][j],three_four[i][j]);
        }
    }
    else
    {
        printf("Case #%d: IMPOSSIBLE\n", test_case);
    }





}
int main()
{
    scanf("%d", &test_case_number);
    while(test_case <= test_case_number)
    {
        pylons();
        test_case++;
    }
    return 0;
}
