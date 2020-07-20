#include<stdio.h>
#include<stdlib.h>

int main()
{
    int dim;
    char E_to_S = 'S'-'E';
    char S_to_E = 'E'-'S';
    char* Liyda;
    int case_number=0;
    while(1)
    {
        case_number++;
        scanf("%d",&dim);
        Liyda = (char*)malloc((2*dim-1)*sizeof(char));
        scanf("%s",Liyda);
        for(int i=0;i<(2*dim-2);i++)
        {
            if(Liyda[i]=='E')Liyda[i]+=E_to_S;
            else Liyda[i]+=S_to_E;
        }
        printf("Case #%d: %s",case_number,Liyda);
        free(Liyda);
    }
}