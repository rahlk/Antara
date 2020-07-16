#include<stdio.h>
#include<string.h>

int main()
    {
    int t;
    scanf("%d",&t);
        for(int k=0;k<t;k++)
            {
                int n,l,i;
                scanf("%d",&n);
                char s[2*n-1];
                scanf("%s",s);
                l = strlen(s);
                for(i=0;i<l;i++)
                    {
                        if(s[i] == 'S')
                            s[i] = 'E';
                        else
                            s[i] = 'S';
                    }
                printf("%s\n",s);
            }
        return 0;
    }