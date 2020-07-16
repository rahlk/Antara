#include<stdio.h>
int i=0;
void eliminate(int n)
{
    printf("Case #%d:%d  %d\n",i,(n/2),(n/2));
    
}

void main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        eliminate(num[i]);
    }
}
