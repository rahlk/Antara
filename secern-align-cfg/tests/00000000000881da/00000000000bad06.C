#include <stdio.h>
#include<string.h> 
int main()
{
    int T,N,j;
    scanf("%d", &T);
    char arr [100][2000];
    char c;
    for(int i =0; i<T;i++){
        scanf("%d", &N);
        char str[2000];
        scanf("%s", str);
        int len = strlen(str);
        j =0;
        for(int count = 0;count <len;count++){
            c = str[count];
            if (c == 'S')
                arr[i][j] = 'E';
            else
                arr[i][j] = 'S';
            ++j;
        }
    }
    for(int i =0; i<T;i++){
        printf("Case #%d: %s\n",i+1,arr[i]);
    }
   
    
    return 0;
}