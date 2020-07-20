#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int d=0;
    while(n--)
    {
        
        int a;
        scanf("%d",&a);
        char arr[a*2-2];
        char b[a*2-2];
        int k=0;
        scanf("%s",arr);
        int i;
        for(i=arr.length()-1;i>=0;i--)
        {
            b[k++]=a[i];
        }
        d++;
        printf("Case #%d: %s",d,b);
    }
}