#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define  SWAP(a,b)  a^=b, b^=a, a^=b
 
char *  strrev (char *str)
{
  char *s, *t;
  for (s = str, t = &str[strlen(str)-1];  s < t;  s++, t--)
    SWAP(*s, *t);
  return str;
}

int main(){
    int t,n;
    char path[100000];
    scanf("%d",&t);
    for(int i = 1; i <= t;i++){
        scanf("%d",&n);
        scanf("%s",&path);
        int start = 0;
        char path2[100000] = "";
        for(int j = 1; j < strlen(path); j++){
            if(path[j] != path[start]){
                char temp[100000] = "";
                for(int k = start; k <= j; k++){
                    temp[k - start] = path[k];
                }
                strcat(path2,strrev(temp));
                j += 1;
                start = j;
            }else if(path[j] == path[start] && j == strlen(path) - 1){
                char temp[100000] = "";
                for(int k = start; k <= j; k++){
                    temp[k - start] = path[k];
                }
                strcat(path2,temp);
            }
        }
        printf("Case #%d: %s\n",i,path2);
    }
    return 0;
}