#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ar[100][255][500];
    char res[100][10000];
    int r,p,s;
    int a[100],i,t,j,l,k,c;
    int fl[255];
    
    scanf("%d",&t);
    
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
        
        
        for(j=0;j<a[i];j++)
        {
            scanf("%s",ar[i][j]);
        }
    }
    
    for(i=0;i<t;i++)
    {
        
        l=0;
        c=-1;
        for(j=0;j<a[i];j++)
        {
            fl[j]=0;
        }
        for(j=0;;j++)
        {
            r=0;
            p=0;
            s=0;
            
            for(k=0;k<a[i];k++)
            {
            if(fl[k]==0)
            {
                if(j>strlen(ar[i][k])-1)
                {
                    l=j-strlen(ar[i][k]);
                    while(l>strlen(ar[i][k])-1)
                     l=j-strlen(ar[i][k]);
                    
                }
                
                else
                  l=j;
                
                
                if(ar[i][k][l]=='R')
                  r++;
                  
                if(ar[i][k][l]=='P')
                  p++;
                  
                if(ar[i][k][l]=='S')
                  s++;
            
            }    
            }
            
            c++;
            if(r&&p&&s)
            {
              res[i][0]='I';
              res[i][1]='M';
              res[i][2]='P';
              res[i][3]='O';
              res[i][4]='S';
              res[i][5]='S';
              res[i][6]='I';
              res[i][7]='B';
              res[i][8]='L';
              res[i][9]='E';
              res[i][10]='\0';
              break;
              
            }
              
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
            
            for(r=0;r<a[i];r++)
            {
                if(fl[r]==1)
                  continue;
                
                if(l>strlen(ar[i][k])-1)
                {
                    l=j-strlen(ar[i][k]);
                    while(j>strlen(ar[i][k])-1)
                     l=j-strlen(ar[i][k]);
                    
                }
                
                else
                  l=j;
                  
                if(ar[i][r][l]==res[i][c])
                  continue;
                  
                else
                {
                  fl[r]=1;
                }
            }
        }
        
    }
    
    for(i=0;i<t;i++)
    {
        printf("Case #%d: %s",(i+1),res[i]);
        
        if(i<(t-1))
          printf("\n");
    }
    
    return 0;
}