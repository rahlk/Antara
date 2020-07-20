#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char d[t][1];
    for(int i=0;i<t;i++)
    {
        int op,y,j,z=0;
        scanf("%d",&op);
        char c[op][500];
        for(j=0;j<op;j++)
        scanf("%s",c[j]);
        for(int k=0;k<op;k++)
        {
           y = strlen(c[k]);
           for(j=0;j<y-1;j++)
           {
            if(y!=1)
            {
            if(c[k][j]=='R'&&c[k][j+1]=='P')
            c[k][j+1]='P';
            else if(c[k][j]=='R'&&c[k][j+1]=='S')
            c[k][j+1]='R';
            else if(c[k][j]=='P'&&c[k][j+1]=='S')
            c[k][j+1]='S';
            else if(c[k][j]=='P'&&c[k][j+1]=='R')
            c[k][j+1]='P';
            else if(c[k][j]=='S'&&c[k][j+1]=='R')
            c[k][j+1]='R';
            else if(c[k][j]=='S'&&c[k][j+1]=='P')
            c[k][j+1]='S';
            }
           }
        }
     /*   for(int k=0;k<op;k++)
        {
            int y=strlen(c[k]);
            printf("%c\n",c[k][y-1]);
        }*/
        int f=0,f1=0;
        d[i][0]='R';
        int count=0;
        for(int k=0;k<op;k++)
        {
            y=strlen(c[k]);
            j=y-1;
            if(c[k][j]='R'&&d[z][0]=='R')
            {
              d[i][0]='P';
              count++;
            }
            else if(c[k][j]='P'&&d[z][0]=='P')
            {
              d[i][0]='S';
              count++;
            }
            else if(c[k][j]='S'&&d[z][0]=='S')
            {
              d[i][0]='R';
              count++;
            }
        }
        if(count==3)
        d[i][0]='x';
    }
    for(int i=0;i<t;i++)
    {
        if(d[i][0]=='x')
        printf("Case #%d: IMPOSSIBLE\n",i+1);
        else
        printf("Case #%d: %c\n",i+1,d[i][0]);
    }
}
