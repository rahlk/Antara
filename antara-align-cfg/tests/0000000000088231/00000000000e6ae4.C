#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void tostring(char str[], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}
 
int toint(char str[])
{
    int len = strlen(str);
    int i, num = 0;
 
    for (i = 0; i < len; i++)
    {
        num = num + ((str[len - (i + 1)] - '0') * pow(10, i));
    }
 
   return num;
}

int main(){
    int tc;
    scanf("%d", &tc);
    for(int z=0; z<tc;z++){
        char* a;
        scanf("%s", &a);
        int c=strlen(a);
        int A=toint(a);    
    
        for(int i=0;i<c;i++){
            if(a[i]=='4'){
                a[i]=='3';
            }
        }
        int B=toint(a);
        A=A-B;
        printf("Case #%d: %d %d", z+1, A,B);
        printf("\n");
    }
}