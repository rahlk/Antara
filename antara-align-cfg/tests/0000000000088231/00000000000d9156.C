#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void digits_4 (char s[],char t[],FILE*tr)
{
    int n=strlen(s);
    for(int i=n-2; i>=0; i--)
    {
        if(s[i]=='4')
        {
            s[i]='1';
            t[i]='3';
        }
        else{
            t[i]='0';
        }

    }
    int ok=1;
    for(int i=0;i<n-1;i++)
       fprintf(tr,"%c",s[i]);
       fprintf(tr," ");
    for(int i=0;i<n-1;i++)
    {
          if(t[i]!='0')
        {
            ok=0;
        }
        if(ok==0)
            fprintf(tr,"%c",t[i]);
    }
       fprintf(tr,"\n");

}
int main()
{
    int T,nr=1;
    FILE* pf = fopen("j.txt","r");
    FILE* tr =fopen("write.txt","w");
    char s[102];
    char t[102];
    fscanf(pf,"%d",&T);
    fgetc(pf);
    while(T!=0)
    {
        fgets(s,102,pf);
        strcpy(t,s);
        fprintf(tr,"Case #%d: ",nr);
        digits_4(s,t,tr);
        nr++;
        T--;

    }

    return 0;
}
