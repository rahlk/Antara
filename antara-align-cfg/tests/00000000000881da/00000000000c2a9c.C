#include<stdio.h>
#include<string.h>
void main()
{ 
    int n;int k;
    char s1;
    char t[20];
    scanf("%d",&n);
    int x;
    int a,b;
    for(a=0;a<=n;a++)
    {scanf("%d",&x);
    int i=0,j=0;
    char f[n-1][n-1];
   scanf("%s",&t);
        while((i<=3 && j<=3) && b<strlen[t])
        {
            if(t[b]=='S')
                f[i][j++]=='S';
            else
                f[i++][j]='E'; 
            b++;    
        }
    i=0;j=0;k=0;
    char p[20];
    while(i<=3 && j<=3)
        {while(i!=3 || j!=3)
            {if(f[i][j]=='S')
                {p[k++]='E';
                i++;
                }
            else if(f[i][j]=='E')
                  {       p[k++]='S';
                j++;}
            else
            {
                p[k]='S';
                j++;
                if(j>=3)
                {
                p[k]='E';
                j--;
                i++;
                }
                k++;
            }
     }
    }    
    p[k]='\0';
    printf("case # %d: %s",a,p);
       
    }
}