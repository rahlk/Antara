#include<string.h>
#include<stdio.h>
int main()
{
    unsigned int test_cases;
    scanf("%u",&test_cases);
    unsigned int mat[test_cases];
    char path[test_cases][(2*test_cases)-2];//,Opath[test_cases][100];

    char** Opath = (char**)calloc(test_cases,sizeof(char*));
    for(unsigned int i = 0; i<test_cases; i++)
        Opath[i] = (char*)calloc(100,sizeof(char));

    char seq1[] = "ES";
    char seq2[] = "SE";

    for(unsigned int itr = 0; itr<test_cases; itr++)
    {
        scanf("%u",&mat[itr]);
        scanf("%s",&path[itr]);
    }

    for(unsigned int itr = 0; itr<test_cases; itr++)
    {
        for(unsigned int ind = 0; ind<mat[itr]-1; ind++)
        {
            //strcat(Opath[itr],(path[itr][0]=='E'?seq2:seq1));
            if(path[itr][0]=='E')
                strcat(Opath[itr],seq2);
            else
                strcat(Opath[itr],seq1);
        }
    }

     for(unsigned int itr = 0; itr<test_cases; itr++)
    {
        printf("Case #%u: %s\n",itr+1,Opath[itr]);
    }

}
