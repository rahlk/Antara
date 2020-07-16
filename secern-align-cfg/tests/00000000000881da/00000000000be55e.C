#include <stdio.h>

int main(){
    int testCases, i, n, start = 0, end, l, count=1;
    char str[50000];
    int overload=0;
    
    scanf("%d", &testCases);

    while(testCases --){
        scanf("%d", &n);
        gets(str);
        fgets(str, 50000, stdin); 
        l = (n<<1) - 2;
        // Initial setup for 1st and last
        start = 0; end = l-1;

        do{
            if (start >= end) break;
            if (str[start] == 'S') { str[start] = 'E'; start++; overload --;}
            else { str[start] = 'S'; start++; overload ++; }
            if (str[end] == 'S') { str[end] = 'E'; end--; overload --; }
            else { str[end] = 'S'; end--; overload ++; }
        }while(overload != 0);
        printf("Case #%d: ", count);
        puts(str);
    }
    return 0;
}