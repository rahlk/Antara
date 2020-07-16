#include <stdio.h>
#include <stdlib.h>


void functie(char s[]){
    
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]=='E')
            printf("%c", 'S');
        else if(s[i]=='S')
            printf("%c", 'E');
    }
}


int main()
{
    int T, i=0;
    scanf("%d", &T);
    while(i<T){

        int dim;
        char* s=calloc(5000,1);
        scanf("%d %s", &dim, s);
        printf("Case #%d: ", i+1);
        functie(s);
        free(s);
        printf("\n");
        i++;
    }

    return 0;
}
