#include <stdio.h>
#include <stdlib.h>


// Devolver o input através de soma sem usar o número 4.
int eleva(int a, int b);
int main()
{
   int n;
   int i, j, t, cont=0;

    printf("Número de casos: ");
    scanf("%d", &n);

    for(i=0; i<n ; i++)
    {
        scanf("%d", &t);
        char vec[2*t-2];   
        scanf("%s", vec);
        printf("Case #%d: ", i+1);
        for(j=0;j<(2*t-2);j++)
        {
            char c = vec[j];
            if(c == 'E') printf("S");
            else printf("E");
        }
        
        
    }
}