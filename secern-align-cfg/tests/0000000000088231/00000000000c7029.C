#include<stdio.h>
#include<string.h>
char str[100][100];
char str2[100];
int n,i;
int divide(char text[])
{
     int k=strlen(text);
     while(k>0)
     {
         k--;
         if(text[k]=='4')
         {
             text[k]='2';
             str2[k]='2';
         }
         else
         {
            str2[k]='0';
         }
     }
     printf(" %s %s",text,str2);
     return 0;
}
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     
        scanf("%s",str[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nCase #%d:",i+1);
        divide(str[i]);
    }
    return 0;
}