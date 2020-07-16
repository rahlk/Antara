#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int func(char a[][255],char string[],int pos,int n)
{
    int r=0,s=0,p=0;
    for(int i=0;i<n;i++)
    {
        if(strncmp(string,a[i],pos)==0)
        {
            if(a[i][pos]=='R')
            r=1;
            else if(a[i][pos]=='S')
            s=1;
            else
            p=1;
        }
        if(r+s+p==3)
        return 0;
        else if(r+s+p==1)
        {
            if(r==1)
            string[pos]='R';
            else if(s==1)
            string[pos]='S';
            else
            string[pos]='P';
            string[pos+1]='\0';
        }
        else
        {
            int q;
            if(r==1&&p==1)
            {
                string[pos]='P';
                q=func(a,string,pos+1,n);
            }
            else if(r==1&&s==1)
            {
                string[pos]='R';
                q=func(a,string,pos+1,n);
            }
            else if(p==1&&s==1)
            {
                string[pos]='S';
                q=func(a,string,pos+1,n);
            }
            return q;
        }
    
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int t1=1;t1<=t;t1++)
    {
        int n,r=0,s=0,p=0;
        scanf("%d",&n);
        char a[n][255];
        char string[20];
        //int r=0,p=0,s=0;
        for(int i=0;i<n;i++)
        {
            scanf("%s",a[i]);
            if(a[i][0]=='R')
                r=1;
            else if(a[i][0]=='P')
                p=1;
            else
                s=1;
        }
        if(r+p+s==3)
        printf("Case #%d: IMPOSSIBLE\n",t1);
        else if(r+p+s==1)
        {
            if(r==1)
            printf("Case #%d: P\n",t1);
            else if(p==1)
            printf("Case #%d: S\n",t1);
            else
            printf("Case #%d: R\n",t1);
        }
        else
        {
            int q;
            if(r==1&&p==1)
            {
                string[0]='P';
                q=func(a,string,1,n);
            }
            else if(r==1&&s==1)
            {
                string[0]='R';
                q=func(a,string,1,n);
            }
            else if(p==1&&s==1)
            {
                string[0]='S';
                q=func(a,string,1,n);
            }
            if(q!=0)
                printf("Case #%d: %s",t1,string);
            else
                printf("Case #%d: IMPOSSIBLE",t1);
        }
    
        
    }
}