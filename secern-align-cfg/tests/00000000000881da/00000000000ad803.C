#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int l;
        scanf("%d",&l);
        char s[2*l-1];
        scanf("%s",s);
        int j,a=0,b=1;
        while(b<=(2*l-3))
        {
            if(s[a]!=s[b])
            {
                char temp;
                temp=s[a];
                s[a]=s[b];
                s[b]=temp;
                a=b+1;
                b+=2;
            }
            else
                b++;
        }
        printf("%s\n",s);
    }
}
