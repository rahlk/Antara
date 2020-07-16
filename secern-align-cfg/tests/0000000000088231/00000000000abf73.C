#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int nr_T;
    scanf("%d",&nr_T);
    for(int q=1;q<=nr_T;q++)
    {
        char xx[102];
        scanf("%s",xx);
        int power=strlen(xx);
        if(power<10)
        {
            // rezolvarea pentru numere mai mici decat 10 la a 9
            int x=atoi(xx);
            int a=0,b=0,power=1;
            while(x>0)
            {
                if(x%10==4)
                {
                    b=power+b;
                    a=power*3+a;
                }
                else
                    a=power*(x%10)+a;
                power=power*10;
                x=x/10;
            }
            printf("Case #%d: %d %d\n",q,a,b);

        }
        else
        {
            char a[102],b[102];
            for(int i=0;i<power;i++)
                if(xx[i]=='4')
                {
                    a[i]='3';
                    b[i]='1';
                }
                else
                {
                    b[i]='0';
                    a[i]=xx[i];
                }
            a[power]='\0';
            int ok=0;
            printf("Case #%d: %s ",q,a);
            for(int i=0;i<power;i++)
                if(ok==1)
                    printf("%c",b[i]);
                else
                    if(b[i]!='0')
                    {
                        ok=1;
                        printf("%c",b[i]);
                    }
            printf("\n");
        }
    }
    return 0;
}
