#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        char arr[102];
        scanf("%s",arr);
        char str[102];
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
        for( k=0;k<strlen(str);k++)
        {
            if(str[k]=='1')break;
        }
        strcpy(str,str+k);
        printf("Case #%d: %s %s\n",test,arr,str);
    }
}