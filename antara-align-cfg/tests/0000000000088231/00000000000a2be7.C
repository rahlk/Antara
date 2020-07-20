#include <stdio.h>
#include <stack>
using namespace std;
stack <int> s;
char a[102];
int x;
char b[102];
int po[102];
int c[102];
int main(void)
{
    int t;
    scanf("%d",&t);

    int k=1000;
    for(int i=1;i<=t;i++)
    {
        scanf("%s",a);
        for(int j=0;j<100;j++)
        {
            if(a[j]!=0)
            {
                if((a[j]-'0')==4)
                {
                    s.push(a[j]-'0'-1);
                    po[j+1]=1;
                    if(k>j)
                        k=j+1;
                }
                else
                    s.push(a[j]-'0');
                x++;
            }
        }
    }
    for(int i=1;i<=x;i++)
    {
        int p;
        p=s.top();
        c[x-i+1]=p;
        s.pop();
    }
    for(int i=1;i<=x;i++)
        printf("%d",c[i]);
    printf(" ");
    for(int i=k;i<=x;i++)
    {
        printf("%d",po[i]);
    }



}