#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int dimention, i, j, t;
    char arr[2*dimention];
    scanf("%d", t);
    
    for(j=0; j<t; j++)
    {
        scanf("%d", dimention);
        scanf("%s", arr);
        for(i=0; i<((2*dimention)-2) ; i++)
        {
            if(arr[i]=="S")
                arr[i] = "E";
            if(arr[i]=="E")
                arr[i] =  "S";
        }
        printf("%s", arr);
    }
    return 0;
}
