#include <stdio.h>
#include <stdlib.h>


// Devolver o input através de soma sem usar o número 4.
int eleva(int a, int b);
int main()
{
   int n;
   int i, j, cont=0;

    scanf("%d", &n);

    unsigned int vec[n] , backup[n], print[n][2];
    unsigned int digitos[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            print[i][j] = 0;
        }

        digitos[i] = 0;
    }

    for(i=0; i<n ; i++)
    {
        int k=0;
        cont=0;
        scanf("%d", &vec[i]);
        backup[i] = vec[i];

        while(vec[i])
        {
            vec[i] = vec[i] / 10;
            digitos[i]++;
        }
        vec[i] = backup[i];
        for(j=0;j<digitos[i];j++)
        {
            if(k==1 && ((vec[i] % 10) == 4)){
                print[i][0] += - eleva(10,cont); 
                print[i][1] += eleva(10,cont);
                vec[i] = vec[i] / 10;
                cont++;
            }
            else if( ((vec[i] % 10) == 4) )
            {
                print[i][0] += backup[i] - eleva(10,cont); 
                print[i][1] += eleva(10,cont);
                vec[i] = vec[i] / 10;
                cont++;
                k=1;
            }
            else{
                vec[i] = vec[i] / 10;
                cont++;
            }
        }
        vec[i] = backup[i];
        if(k==0)
        {
            printf("Case #%d: %d 0\n", i+1, backup[i]);
        }
        else{
            printf("Case #%d: %d %d\n", i+1, print[i][0], print[i][1]);
        }
    }
    

}


int eleva(int a, int b)
{
    if(b==0)
    {
        return 1;
    }
    else if(b==1)
    {
        return a;
    }
    return a*eleva(a, b-1);
}