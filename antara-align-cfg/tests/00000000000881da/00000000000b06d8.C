#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        long int l;
        scanf("%ld",&l);
        char s[2*l-1],s1[2*l-1];
        scanf("%s",s);
        long int j=0;
        while(s[j]!='\0')
        {
            if(s[j]=='E')
                s1[j]='S';
            else if(s[j]=='S')
                s1[j]='E';
            j++;
        }
        printf("%s\n",s1);
    }
}
