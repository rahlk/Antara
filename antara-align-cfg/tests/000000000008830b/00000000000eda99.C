#include<stdio.h>
#include<string.h>
int t,i,j;
int n[100],l[100];
long int c[100][100];
long int z[100];
int code[26];
int solve(long int a[],int x,int y,int pos)
{
    int min=a[0];
    int p,r=0,k=0,j=0,l,temp=0;
    for(l=1;l<y;l++)
    {
        if(a[l]<min)
        {
            min=a[l];
            p=l;
        }
    }
    for(l=(min/2);l>1;l--)
    {
            int c;
     
       for ( c = 2 ; c <= l - 1 ; c++ )
       { 
          if ( l%c == 0 )
           r=1;
       }
        if(r==1)
        {
            if(min%l==0)
            {
                k=min/l;
                break;
                
            }
        }
    }
    if(a[p-1]%k==0)
    {
        z[p]=k;
        z[p+1]=l;
        temp=z[p];
    }
    else
    {
        z[p]=l;
        z[p+1]=k;
        temp=z[p];
    }
    if(p>0)
    {
        for(j=p-1;j>=0;j--)
        {
            temp=a[j]/temp;
            z[j]=temp;
        }
    }
    temp=z[p+1];
    if(p+1<y+1)
    {
        for(j=p+2;j<=y+1;j++)
        {
            temp=a[j]/temp;
            z[j]=temp;
        }
    }
   int max=0;
    for(j=25;j>=0;j--)
    {
        for(k=0;k<=y;k++)
        {
            if(z[k]>max &&j==25)
            {
                max=z[k];
            }
            else if(z[k]>max &&z[k]<code[j+1])
            {
                max=z[k];
            }
        }
        code[j]=max;
    }
    for(j=0;j<=y;j++)
    {
        for(k=0;k<=25;k++)
        {
            if(z[j]==code[k])
            {
                k=k+65;
                printf("%c",k);
                break;
            }
        }
    }
    return 0;
    }


int main()
{
 scanf("%d",&t);
     for(i=0;i<t;i++)
     {
         scanf("%d %d",&n[i],&l[i]);
          for(j=0;j<l[i];i++)
          {
           scanf("%d",&c[i][j]);
          }
      
     }
     for(i=0;i<t;i++)
     {
         printf("\nCase #%d:",i+1);
         solve(c[i],n[i],l[i],i);
     }
     return 0;
}

