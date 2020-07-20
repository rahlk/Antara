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
        if (str[0] == 'S') { str[0] = 'E'; overload --;}
        else { str[0] = 'S'; overload ++; }
        if (str[l-1] == 'S') { str[l-1] = 'E'; overload --; }
        else { str[l-1] = 'S'; overload ++; }
        start = 1; end = l-2;
        // puts(str);
        // printf("%d %d %d\n", start, end, overload);
        while(overload != 0){
            if (start >= end) break;
            if(overload>0){
                if (str[start] == 'S'){
                    str[start] = 'E'; start ++; overload--;
                    if (overload==0) break;
                }
                else if (str[end] == 'S'){
                    str[end] = 'E'; end--; overload--;
                    if (overload==0) break;
                }
                else{
                    str[start] = 'S'; start ++; overload++;
                }
                // printf("%d %d %d\n", start, end, overload);
                continue;
            }
            else if (overload<0){
                if (str[start] == 'E'){
                    str[start] = 'S'; start++; overload++;
                    if (overload==0) break;
                }
                if (str[end] == 'E'){
                    str[end] = 'S'; end--; overload++;
                    if (overload==0) break;
                }
                else{
                    str[start] = 'E'; start ++; overload--;
                }
                // printf("%d %d %d\n", start, end, overload);
                continue;
            }
        }
        printf("Case #%d: ", count);
        puts(str);
    }
    return 0;
}