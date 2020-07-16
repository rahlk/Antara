#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000],t[10000];
    int p,i,n,j,x1,x2,x3,x4,y1,y2,y3,y4,k,change,path(),f;
    void changepath();
    scanf("%d",&p);
    for(k=1;k<=p;k++)
    {
        scanf("%d",&n);
        scanf("%s",s);
        i=0;
        for(j=0;j<2*n-2;j++)
        {
            if(s[j]=='S')
            {
                x1=i;
                y1=i;
                
                x2=i;
                y2=i+1;
                
                x3=i;
                y3=i;
                
                x4=i+1;
                y4=i;
                change=path(x1,y1,x2,y2,x3,y3,x4,y4);
                if(change==1)
                {
                    f=0;
                    changepath(&x4,&y4,f);
                    t[j]='S';
                }
                else{
                    t[j]='E';
                }
                
            }
            else
            {
                x1=i;
                y1=i;
                
                x2=i+1;
                y2=i;
                
                x3=i;
                y3=i;
                
                x4=i;
                y4=i+1;
                change=path(x1,y1,x2,y2,x3,y3,x4,y4);
                if(change==1)
                {
                    f=1;
                    changepath(&x4,&y4,f);
                    t[j]='E';
                }
                else
                {
                    t[j]='S';
                }
            }
            i++;
        }
        printf("Case #%d: ",k);
        for(j=0;j<2*n-2;j++)
        {
            printf("%c",t[j]);
        }
        printf("\n");
        
    }
    return 0;
    
}
int path(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
    int f=0;
    if(x1==x3&&y1==y3&&x2==x4&&y2==y4)
    {
        return f;
    }
}
void changepath(int *p,int *q,int f)
{
    if(f==0)
    {
        *p=*p-1;
        *q=*q+1;
    }
    else
    {
        *p=*p+1;
        *q=*q-1;
    }
}