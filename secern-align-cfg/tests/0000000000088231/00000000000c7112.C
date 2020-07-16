
int main()
{
    int n = 944;
    for(int a=2;a<n;a++)
    {
        for(int b=n-2;b<=n;b++)
        {
             if (a!=4 && b!=4)
                {
                    int c = a+b;
                    if(c==n)
                    {
                        printf("%d %d\n",a,b);
                    }
                }
        }

    }
    return 0;