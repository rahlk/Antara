#include<stdio.h>
int main()
{
    int test,count,n,count1;
    char str[1000];
    scanf("%d",&test);
    for(count=1;count<=test;count++)
    {
        scanf("%d",&n);
        scanf("%s",str);
        count1=0;
        while(str[count1]!='\0')
        {
            if(str[count1]=='S')
            {
                str[count1]='E';
            }
            else if(str[count1]=='E')
            {
                str[count1]='S';
            }
            count1++;
        }
        printf("Case #%d: %s\n",count,str);
        
    }
    return 0;
}