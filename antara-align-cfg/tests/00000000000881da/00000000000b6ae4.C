#include <stdio.h>
#include <string.h>

int main()
{
    int t,b;
    scanf("%d",&t);
    char a[200];
    for(int k =1;k<=t;k++)
    {
        scanf("%d",&b);
        scanf("%s", a);
        int l = 0;
        l = strlen(a);

        for (int i = 0; i < l; i++) {
            if (a[i] == 'E')
                a[i] = 'S';
            else
                a[i] = 'E';


        }

        printf("Case #%d: %s\n",k, a);
    }


    return 0;

}