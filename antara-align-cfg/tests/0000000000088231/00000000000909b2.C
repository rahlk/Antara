#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,n1,n2;
        char str1[100],str2[100];
        scanf("%d",&n);
        sprintf(str1, "%d", n);
        int len=strlen(str1),i;
        str2[0]='0';
        for(i=0;i<len-1;i++)
        {
            if(str1[i]=='4')
                str2[i]='1';
            else
                str2[i]='0';
        }
        if(i>0)
        {
            str2[i]='0';
            str2[i+1]='\0';
        }
        else
            str2[i+1]='\0';
        //printf("%s %s",str1,str2);
        sscanf(str2, "%d", &n1);
        n2=n-n1;
        char st1[100],st2[100];
        sprintf(st1, "%d", n1);
        sprintf(st2, "%d", n2);
        //printf("%d %d ",n1,n2);
        int f1=0,f2=0,f=0;
        while(f!=1){
            f1=0;
            f2=0;
            int l1=strlen(st1);
            int l2=strlen(st2);
            for(i=0;i<l1;i++)
            {
                if(st1[i]=='4')
                    f1=1;
            }
            for(i=0;i<l2;i++)
            {
                if(st2[i]=='4')
                    f2=1;
            }
            if(f1==0&&f2==0)
            {
                f=1;
                break;
            }
            //printf("%d %d %s %s %d %d",n1,n2,st1,st2,f1,f2);
            n1++;
            n2--;
            sprintf(st1, "%d", n1);
            sprintf(st2, "%d", n2);
            //scanf("%d",&i);
        }
        printf("%d %d ",n1,n2);
    }
    return 0;
}
