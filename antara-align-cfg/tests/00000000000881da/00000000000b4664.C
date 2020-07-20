#include<stdio.h>
#include<string.h>
int solvemaze(int n,char m[100])
{   int l,r=0,c=0,r1=0,c1=0,i; 
    char a[n][n];
    l = strlen(m);
    for(i=0;i<l;i++)
    {
    if(m[i]=='s' && r<=n)
    {r++;a[r][c]='s';}
    else if(m[i]=='e' && c<=n)
    {c++;a[r][c]='e';}
    }
    while(c1<n && r1<n)
    {
        if(a[r1+1][c1]=='s')
        {
            a[r1][c1+1]='e';
            printsolution('e');
            c1++;
        }else if(a[r1+1][c1]=='e')
        {
           a[r1+1][c1]='s'; 
           printsolution('s');
           r1++;
        }else if(a[r1][c1+1]=='e')
        {
           a[r1+1][c1]=='s';printsolution('s');r1++; 
        }else if(a[r1][c1+1]=='s')
        {
           a[r1][c1+1]=='e';printsolution('e');r1++; 
        }else 
        {
            a[r1][c1+1]='e';
             printsolution('e');
            c1++;
        }
            
        }
        while(c1>=n || r1>=n)
        {
        if(r1<n)
        {
            a[r1+1][c1-1]='s';
             printsolution('s');
            r1++;
        }
        else if(c1<n)
        {
            a[r1-1][c1+1]='e';
             printsolution('e');
            c1++;
        }else
        break;
        }
        return 0;
    }
    int printsolution(char p[100])
    {
        printf("%s",p);
        p++;
        return 0;
    }
int main()
{    int n,i,t;
     char m[100];
     char a[n][n];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d",&n);
    scanf("%s",m);
    solvemaze(n,m);
    
    
    }
    return 0;
}
    