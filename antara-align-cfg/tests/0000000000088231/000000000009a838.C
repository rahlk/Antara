#include<stdio.h>
main()
{
    int n,i,a[20],
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",a[i]);
    for(i=0;i<n;i++)
        printf("case #%d: %d %d",i+1,(a[i]/2),(a[i]/2));
}