#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr_T;
    scanf("%d",&nr_T);
    for(int q=1;q<=nr_T;q++)
    {
        int n;
        scanf("%d",&n);
        int val=2*n-2;
        char *sir;
        sir=(char*)malloc((val+1)*sizeof(char));
        scanf("%s",sir);
        sir[val+1]='\0';

        for(int i=0;i<val;i++)
            if(sir[i]=='E')
                sir[i]='S';
            else
                sir[i]='E';
        printf("Case #%d: %s\n",q,sir);
    }
    return 0;
}
