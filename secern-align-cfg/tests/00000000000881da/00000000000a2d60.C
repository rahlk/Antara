#include<stdio.h>
#include<string.h>
int main()
{
    int t,k=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        char str1[1000000000],str2[1000000000];
        scanf("%d\n",&n);
        scanf("%s",&str1);
        int len=strlen(str1),i;
        for(i=0;i<len;i++)
        {
            if(str1[i]=='E')
                str2[i]='S';
            else
                str2[i]='E';
        }
        str1[i]='\0';
        printf("Case #%d: %s %d\n",k++,str2,n);
    }
    return 0;
}
