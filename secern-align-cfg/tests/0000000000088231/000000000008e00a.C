#include <stdio.h>
#include <string.h>

#define true 1 
#define false 0

typedef unsigned char bool;

char n[120], n1[120], n2[120];
int c1, c2;

int main()
{
    int T, cont = 0;
    scanf("%d\n", &T);
    while(T--)
    {
        int i, size;
        
        scanf("%s\n", n);
        
        size = (int)strlen(n);
        
        for(i = 0, c1 = 0, c2 = 0; i < size; i++)
            if(i == 0 && n[i] == '1' && n[i+1] == '0')
                n1[c1++] = '5', n2[c2++] = '5', i++;
            else if(i == 0 && n[i] == '1' && n[i+1] == '1')
                n1[c1++] = '6', n2[c2++] = '5', i++;
            else if(n[i] == '5')
                n1[c1++] = '3', n2[c2++] = '2';
            else if(n[i] > '0')
                n1[c1++] = n[i]-1, n2[c2++] = '1';
            else
                n1[c1++] = '0', n2[c2++] = '0';
        n1[c1++] = 0, n2[c2++] = 0;
        
        printf("Case #%d: %s %s\n", ++cont, n1, n2);
    }
    
    return 0;
}
