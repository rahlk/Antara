#include<stdio.h>
#include<string.h>

int main()
    {
    int t;
    scanf("%d",&t);
        for(int k=0;k<t;k++)
            {
                int n,i;
                scanf("%d",&n);
                char s[2*n-1];
                scanf("%s",s);
                int l=strlen(s);
                    for(i=0;i<l;i++)
                        {
                            if((s[i] == 'E') && (s[i+1] == 'E'))
                                {
                                    s[i] = 'S';
                                    s[i+1] = 'E';
                                }
                           else if(s[i] == 'S' && s[i+1] == 'S')
                                {
                                    s[i] = 'E';
                                    s[i+1] = 'E';
                                }
                            else if(s[i] == 'S' && s[i+1] == 'E')
                                {
                                    s[i] = 'E';
                                    s[i+1] = 'S';
                                }
                            else if(s[i] == 'E' && s[i+1] == 'S')
                                {
                                    s[i] = 'S';
                                    s[i+1] = 'S';
                                }
                                i++;
                        }
                    printf("%s\n",s);
            }
        return 0;
    }