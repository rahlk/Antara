#include <stdio.h>
//#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);

    char p[100];
    int x=1;
    while(t--)
    {
        //for each test case code goes here
        int n;
        scanf("%d",&n);

        scanf("%s",p);

        //printf("%s\n",&p[0]);

        //WORK ON STORED_STRING by traversing and modifying
        //int len=strlen(p);
        for(int i=0; i< 2*n-2; )
        {
            //if E-stored modify to S
            if(p[i]=='S')
            {
                p[i]='E';
                i++;
            }

            else if(p[i]=='E')
            {
                p[i]='S';
                i++;
            }

            else
            {
                i++;
            }
        }
        printf("Case #%d: %s\n",x,p);
        x++;
    }

    return 0;
}
