#include <stdio.h>
#include <string.h>

int t;
void f(int n)
{
    int N;
    char a[50001];
    scanf("%d",&N);
    scanf("%s",a);
    printf("Case #%d: ",n);
    int l=strlen(a);
    int s=0,e=0,check=0;
    for(int i=0 ; i<l ; i++)
    {
        if(a[i]=='S')
            s++;
        else
            e++;
        if(s==e)
        {
            for(int j=check ; j<=i ; j++)
            {
                if(a[j]=='S')
                    printf("E");
                else
                    printf("S");
            }
            check=i+1;
        }
    }
    printf("\n");
}
int main(void)
{
    scanf("%d",&t);
    for(int i=1 ; i<=t ; i++)
    {
        f(i);
    }
    return 0;
}
