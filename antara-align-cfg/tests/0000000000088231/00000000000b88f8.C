#include <stdio.h>
#include<math.h>
int main()
{
    int q;
    scanf("%d",&q);
    for(int i=1;i<=q;i++)
    {
        int n,c=0,n1=0,n2=0;
        scanf("%d",&n);
        int cpy=n;
        while(cpy>0)
        {
            int r=cpy%10;
            if(r==4)
            {
                n-=pow(10,c);
                n2+=pow(10,c);
            }
            cpy/=10;
            c++;
        }
        printf("Case #%d: %d %d\n",i,n,n2);
    }

    return 0;
}
