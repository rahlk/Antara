#include <stdio.h>
int main()
{
    int t,n,sls,sss,sle,sse;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        char sl[((2*n)-2)];
        scanf("%s",sl);
        char ss[((2*n)-2)];
        sls=0,sle=0,sss=0,sse=0;
        int j;
        for(j=0;j<((2*n)-2);j++)
        {
            if(sls==sss && sle==sse)
            {
                if(sl[j]=='S')
               { ss[j]='E';
                sls++;
                sse++;   
               }
                else
                {
                ss[j]='S';
                sss++;
                sle++;
                }
            }
            else if(sls!=sss && sle!=sse)
            {
                if(sl[j]=='S')
                {
                 ss[j]='E';
                 sss++;
                 sls++;
                }
                else
                {
                    ss[j]='S';
                    sse++;
                    sle++;
                }
            }
            
        }
        ss[j]='\0';
        printf("Case #%d: %s\n",i,ss);
    }
}