#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    int r=1;
    while(t--)
    {
        
        int n;
        char a[100000];
        char b[100000];
        int s=1;
        int e=1;
        scanf("%d",&n);
        scanf("%s",&a);
        printf("Case #%d: ",r);
        r++;
        int k=0;
        int z=0;
        while(s<n && e<n)
        {
            if(z%2==0)
            {
                if(a[k]=='E')
                {
                    printf("SE");
                    s++;
                    e++;
                }
                else
                {
                    printf("ES");
                    s++;
                    e++;
                }
                k+=2;
            }
            else
            {
               if(a[k+1]=='S')
               {
                   printf("E");
                   e++;
               }
               else
               {
                   printf("S");
                   s++;
               }
            }
            z++;
        }
        printf("\n");
        }
        return 0;
        }

