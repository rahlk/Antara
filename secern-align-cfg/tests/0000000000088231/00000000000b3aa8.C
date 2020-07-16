#include<stdio.h>
#include<string.h>

int main() 
{
    int testcase;
    scanf("%d", &testcase);
    
    for (int i = 1; i <= testcase; i++)
    {
        char n[102];
        scanf("%s", n);
        int l = strlen(n);
        char b[l];
        memset(b, '0', l);
        for (int j = 0; j < l; j++){
            if (n[j] == '4') {
                n[j] = '3';
                b[j] = '1';
            }
        }
        
        printf("Case #%d: %s %s\n", i, n, b);
    }
    return 0;
}