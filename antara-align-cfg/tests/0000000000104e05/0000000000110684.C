#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int nr_t;
    scanf("%d",&nr_t);
    for(int q=1; q<=nr_t; q++)
    {
        int n;
        scanf("%d",&n);
        char s[1000][51];
        for(int i=0; i<n; i++)
            scanf("%s",s[i]);
        int nr_sufixe=0,val_suflu=0,val_suflu_j;
        char sufixe[500][51];
        char suflu[51],max_suflu[51];
        for(int i=0; i<n-1; i++)
        {
            max_suflu[0]='\0';
            if(s[i][0]!='\0')
            {
                for(int j=i+1; j<n; j++)
                {
                    if(s[j][0]!='\0')
                    {
                        int n1=strlen(s[i])-1;
                        int n2=strlen(s[j])-1;
                        int sufix=0;
                        while(s[i][n1]==s[j][n2] && n1>=0 && n2>=0)
                        {
                            suflu[sufix]=s[i][n1];
                            sufix++;
                            n1--;
                            n2--;
                        }
                        suflu[sufix]='\0';
                        if(sufix>strlen(max_suflu))
                        {
                            strcpy(max_suflu,suflu);
                            val_suflu=sufix;
                            val_suflu_j=j;
                        }
                    }
                }
                if(val_suflu>0)
                {
                    int ok=1;
                    int k=0;
                    while(k<nr_sufixe &&  ok==1)
                    {
                        if(strcmp(sufixe[k],max_suflu)==0)
                        {
                            val_suflu--;
                            if(val_suflu==0)
                                ok=0;
                            max_suflu[val_suflu]='\0';
                            k=0;
                            continue;
                        }
                        k++;
                    }
                    if(ok==1)
                    {
                        strcpy(sufixe[nr_sufixe],max_suflu);
                        nr_sufixe++;
                        s[i][0]='\0';
                        s[val_suflu_j][0]='\0';
                    }
                }
            }
        }
        printf("Case #%d: %d\n",q,nr_sufixe*2);
    }
    return 0;
}
