#include<stdio.h>
int main()
{
    int t,test,c_len, i;
    char c[50001];
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        scanf("%d", &c_len);
        scanf("%s", c);
        i = 0;
        while (c[i] != '\0') {
            if(c[i] == 'S') {
                c[i] = 'E';
            } else if (c[i] == 'E') {
                c[i] = 'S';
            }
            i++;
        }
        printf("Case #%d: %s \n", t, c);
    }
    return 0;
}