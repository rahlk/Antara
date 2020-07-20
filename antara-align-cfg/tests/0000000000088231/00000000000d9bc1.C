#include<stdio.h>
#include<string.h>
char str[105],ans1[105],ans2[105];

int main()
{
    int t,x=0;
    scanf("%d",&t);
    while(t--)
    {
        x++;
        scanf("%s",str);
        printf("Case #%d: ",x);
        int i;
        //printf("%ld ",strlen(str));
        for(i=0;i<strlen(str);i++)
        {
            //printf("%d ", i);
            if(str[i] != '4')
            {
                //printf("no 4\n");
                ans1[i]=str[i];
                ans2[i]='0';
                //printf("%c %c \n", ans1[i],ans2[i] );
            }
            else
            {
                //printf("hai 4 hai\n");
                ans1[i]='3';
                ans2[i]='1';
            }
        }
        ans1[i] = '\0';
        ans2[i] = '\0';
        printf("%s %s\n",ans1,ans2);
        
    }
}