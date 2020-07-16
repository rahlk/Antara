
#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int c = 2*n-2;
        
        char a[c+1];
        char b[c+1];
        scanf("%s", a);
        
        for(int j=0;j<c;j++)
        {
            if(a[j]=='S')
            b[j]='E';
            else
            b[j]='S';
        }
        b[c]='\0';
        
        printf("Case #%d: %s\n",i+1,b);
    }
}