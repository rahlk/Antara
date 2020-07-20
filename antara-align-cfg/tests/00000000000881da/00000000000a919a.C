#include<stdio.h>
#include<string.h>

int main()
    {
    int t;
    scanf("%d",&t);
        for(int k=0;k<t;k++)
            {
                int n,i=0,j=0,h=0;
                scanf("%d",&n);
                char s[2*n-1],m[2*n-1];
                scanf("%s",s);
                int l=strlen(s);
                if(s[0] == 'S')
                    {
                        while(j<n)
                            {
                               m[h++] == 'E'; 
                            }
                        while(i<n)
                            {
                               m[h++] == 'S'; 
                            }
                    }
                else
                    {
                        while(j<n)
                            {
                               m[h++] == 'S'; 
                            }
                        while(i<n)
                            {
                               m[h++] == 'E'; 
                            }
                    }
                    printf("%s\n",s);
            }
        return 0;
    }