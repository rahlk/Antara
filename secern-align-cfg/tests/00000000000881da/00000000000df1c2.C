#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void parcurgere (char s[])
{
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='E')
            s[i]='S';
        else s[i]='E';
    }
}

int main()
{
    int T,n,nr=0;
    char* p[102];
   scanf("%d",&T);
   while(T!=0)
   {
       scanf("%d",&n);
       fflush(stdin);
       char* s=(char*)calloc(2*n,sizeof(char));
       gets(s);
       parcurgere(s);
       p[nr]=s;
       nr++;
       T--;
   }
   T=nr;
   for(int i=0;i<T;i++)
   {
       printf("Case #%d: %s\n",i+1,p[i]);
   }
    return 0;
}
