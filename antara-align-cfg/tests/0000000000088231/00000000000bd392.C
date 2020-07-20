#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int l=0;l<test;l++)
    {
        char arr[102];
        scanf("%s",arr);
        char *str;
        str=(char*)malloc(strlen(arr)*sizeof(char));
        for(int i=0;i<strlen(arr);i++)str[i]='0';
        for(int i=0;i<strlen(arr);i++)
        {
            if(arr[i]=='4')
            {
                arr[i]='3';
                str[i]='1';
            }
        }
        int k;
        for( k=0;k<strlen(arr);k++)
        {
            if(str[k]=='1')break;
        }
        strcpy(str,str+k);
        printf("Case #%d: %s %s\n",l+1,arr,str);
    }
}