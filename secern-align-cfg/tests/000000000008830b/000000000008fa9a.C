#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[1000];
    fgets(s,1000,stdin);
    int i flag=1;
    for(int  j=65,k=97;j<=90,k<=122;j++,k++)
    {
        if((strchr(s,j)==NULL)&&(strchr(s,k)==NULL)
        {
            flag=0;break;
        }
    }
    if(flag==1)
    printf("pangram");
    else
    printf("not pangram");
}
}