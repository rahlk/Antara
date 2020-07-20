#include <stdio.h>
#include<string.h> 

int main()
{
    int T,N,j;
    scanf("%d", &T);
    char* arr [100];
    char c;
    for(int i =0; i<T;i++){
        scanf("%d", &N);
        char str[100000];
        char*str2= malloc(100000*sizeof(char));
        scanf("%s", str);
        int len = strlen(str);
        j =0;
        for(int count = 0;count <len;count++){
            c = str[count];
            if (c == 'S'){
               str2[count] = 'E';
            }else{
               str2[count] = 'S';
            }
            ++j;
        }
        //printf("test #%d: %s\n",i+1,str2);
        arr[i]=str2;
    }
    for(int i =0; i<T;i++){
        printf("Case #%d: %s\n",i+1,arr[i]);
    }
   
    
    return 0;
}
