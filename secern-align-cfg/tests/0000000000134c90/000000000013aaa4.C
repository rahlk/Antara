#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    char ar[255][500];
    char res[100][500];
    int r,p,s;
    int a,i,t,j,l,k,c;
    int fl[255];
    
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        
        l=0;
        c=-1;
        
        for(j=0;j<a;j++)
        {
            fl[j]=0;
            scanf("%s",ar[j]);
            if(l<strlen(ar[j]))
              l=strlen(ar[j]);
        }
        
        
        
        for(j=0;j<255;j++)
        {
            r=0;
            p=0;
            s=0;
            
            for(k=0;k<a;k++)
            {
            if(fl[k]==0)
            {
                if(j>strlen(ar[k]))
                {
                    l=strlen(ar[k])-j-1;
                }
                
                else
                  l=j;
                
                
                if(ar[k][l]=='R')
                  r++;
                  
                if(ar[k][l]=='P')
                  p++;
                  
                if(ar[k][l]=='S')
                  s++;
            
            }    
            }
            
            if(r&&p&&s)
            {
              res[i][100]="IMPOSSIBLE";
              break;
              
            }
              
            c++;
            else if(r&&p)
              res[i][c]='P';
              
            else if(r&&s)
              res[i][c]='R';
              
            else if(s&&p)
              res[i][c]='S';
              
            else if(r)
              res[i][c]='P';
              
            else if(p)
              res[i][c]='S';
              
            else if(s)
              res[i][c]='R';
              
            else
            {
                res[i][c]='\0';
                break;
            }
            
            for(r=0;r<a;r++)
            {
                if(j>strlen(ar[r]))
                {
                    l=strlen(ar[r])-j-1;
                }
                
                else
                  l=j;
                  
                if(ar[r][l]==res[i][c])
                  continue;
                  
                else
                  fl[r]=1;
            }
        }
        
    }
    
    for(i=0;i<t;i++)
    {
        printf("Case #%d: %s",(i+1),res[i])
        
        if(i<(t-1))
          printf("\n");
    }
    
    return 0;
}