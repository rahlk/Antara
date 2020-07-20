#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char input[100];
    bool mark[26]={false};
    int t;
    printf("enter the string\n");
    gets(input);
    int i;
    for(i=0;input[i]!='\0';i++)
    {
        if(input[i]>=97 && input[i]<=122)
        {
            t=input[i]-97;
            mark[t]=true;
        }
        else if(input[i]>=65 && input[i]<=90)
        {
            t=input[i]-65;
            mark[t]=true;
        }
    
    }
    for(i=0;i<=25;i++)
    {
        if(mark[i]!=true)
        {
            t=0;
        } 
        else
        {
         t=1;  
        }
    }
    
           if(t==0)
            printf("%s is not a pangram",input);
            else
            {
                printf("%s is a pangram",input);
            }
    return 0;
    
}
