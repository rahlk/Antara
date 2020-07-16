#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void solve (char c[256][505],char mat[100][505],int pos,int nr)
{
    int s,r,p,ok=1,aux=0,contor;
    s=r=p=0;
    while(ok==1)
    {
        s=r=p=contor=0;
        for(int i=0;i<nr;i++)
        {
            if(c[i][aux]=='R')
                r++;
            else if (c[i][aux]=='P')
                 p++;
              else if(c[i][aux]=='S')
                 s++;
              else contor++;
        }
        if(contor==nr)
            break;
        if(p>0 && s>0 && r>0)
        {
            ok=0;
            strcpy(mat[pos],"IMPOSSIBLE");
            return;
        }
        else
        {
          if(r>0 && s>0)
                mat[pos][aux]='R';
          else if(r>0 && p>0)
                mat[pos][aux]='P';
          else if(p>0 && s>0)
                mat[pos][aux]='S';
          else if(p>0)
          {
              mat[pos][aux]='S';
              mat[pos][aux+1]=0;
              return;
          }
          else if(s>0)
          {
              mat[pos][aux]='R';
              mat[pos][aux+1]=0;
              return;
          }
          else if(r>0)
          {
              mat[pos][aux]='P';
              mat[pos][aux+1]=0;
              return;
          }

        }
        aux++;
    }
    if(mat[pos][0]=='R')
    {
        mat[pos][aux]='P';
        mat[pos][aux+1]=0;
    }
    if(mat[pos][0]=='S')
    {
        mat[pos][aux]='R';
        mat[pos][aux+1]=0;
    }
    if(mat[pos][0]=='P')
    {
        mat[pos][aux]='S';
        mat[pos][aux+1]=0;
    }

}
int main()
{
    int t,a,nr=0,aux;
    char c[256][505];
    char mat[100][505];
    scanf("%d",&t);
    while (t!=0)
    {
        scanf("%d",&a);
        aux=0;
        while (a!=0)
        {
            scanf("%s",c[aux]);
            aux++;
            a--;
        }
        solve(c,mat,nr,aux);
        nr++;
        t--;
    }
    for(int i=0;i<nr;i++)
        printf("Case #%d: %s\n",i+1,mat[i]);

    return 0;
}
