#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int nr_t;
    scanf("%d",&nr_t);
    for(int q=1;q<=nr_t;q++)
    {
        int n;
        scanf("%d",&n);
        char s[1000][51];
        for(int i=0;i<n;i++)
            scanf("%s",s[i]);
        int nr_sufixe=0;
        char sufixe[500][51];
        for(int i=0;i<n-1;i++)
        {
            if(s[i][0]!='\0')
                for(int j=i+1;j<n;j++)
                {
                    if(s[j][0]!='\0')
                    {
                        int n1=strlen(s[i])-1;
                        int n2=strlen(s[j])-1;
                        int sufix=0;
                        while(s[i][n1]==s[j][n2] && n1>=0 && n2>=0)
                        {
                            sufixe[nr_sufixe][sufix]=s[i][n1];
                            sufix++;
                            n1--;
                            n2--;
                        }
                        sufixe[nr_sufixe][sufix]='\0';
                        if(sufix>0)
                        {
                            int ok=1;int k=0;
                            while(k<nr_sufixe &&  ok==1)
                            {
                                if(strcmp(sufixe[k],sufixe[nr_sufixe])==0)
                                {
                                    sufix--;
                                    if(sufix==0)
                                        ok=0;
                                    sufixe[nr_sufixe][sufix]='\0';
                                    k=0;
                                    continue;
                                }
                                k++;
                            }
                            if(ok==1)
                            {
                                nr_sufixe++;
                                s[i][0]='\0';
                                s[j][0]='\0';
                                break;
                            }
                        }
                    }
                }
        }
        printf("Case #%d: %d\n",q,nr_sufixe*2);
    }
    return 0;
}
