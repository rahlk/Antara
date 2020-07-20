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
        for(i=0;i<=(sizeof(arr)/sizeof(arr[0]))-1;i++)
        {
            if(arr[i]=='E')
            b[k++]='S';
            else
            b[k++]='E';
        }
        b[k]='\0';
        d++;
        printf("Case #%d: %s\n",d,b);
    }
}