#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    char n[202],a[202],b[202];
    int number = 1;
    int l,nod,lb;
    while(T--)
    {
        scanf("%s",&n);
        l = strlen(n);
        b[l]=0;
        n[l]=0;
        a[l]=0;
        nod = l;
        lb = nod-1;
        for(;nod>0;--nod)
        {
            if(n[lb]=='4')
            {
                n[lb]='1';
                b[lb]='3';
            }
            else
            {
                b[lb]='0';
            }
            --lb;
        }
        char temp;
        int z=0;
        while(b[z]!=0)
        {
            if(b[z]!='0')break;
            z++;
        }
        int aaa=0;
        while(b[z]!=0)
        {
            a[aaa] = b[z];
            ++aaa;
            ++z;
        }
        a[aaa]=0;
        printf("Case #%d: %s %s\n",number,n,a);
        number++;
    }
return 0;
}