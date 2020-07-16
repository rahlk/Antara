#include<stdioh>
int main()
{
    char a[100],b[100];
    int n,t,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%c",&a[i]);
        for(i=0;i<n;i++)
        {
            if((a[i-1]!=a[i])&&(a[i]!=a[i+1])
            {
                if(a[i]==a[i+1])
                b[i]=a[i];
                else
                b[i]=a[i+1];
            }
            
        }
        for(i=0;i<n;i++)
        printf("%c"b[i]);
    }
}