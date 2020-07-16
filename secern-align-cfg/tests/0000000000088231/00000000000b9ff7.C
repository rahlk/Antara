#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int t,j=1;
    scanf("%d",&t);
    while(j <= t)
    {
        char n[102],a[102]={'\0'},b[102]={'\0'};
        int i = 0,flag = 0;
        scanf("%s",n);
        while(n[i] != '\0')
        {
            int p = n[i] - '0';
            if(p == 4)
            {
                a[i] = (p - 1) + '0';
                b[i] = 1 + '0';
            }
            else
            {
                a[i] = p + '0';
                b[i] = '0';
            }
            i++;
        }
        printf("Case #%d: %s %s\n",j,a,b);
        j++;
    }

    return 0;
}