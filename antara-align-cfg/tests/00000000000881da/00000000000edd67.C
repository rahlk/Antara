#include<stdio.h>
main()
{
    int t,j,i;
    char arr[2000];
    int n;
    scanf("%d",&t);
    for(j=1;j<=t;++j)
    {
        scanf("%d\n",&n);
        gets(arr);
        for(i=0;i<2*n-2;++i)
        {
            if(arr[i]=='S')
                arr[i]='E';
            else
                arr[i]='S';
        }
        printf("Case #%d: %s\n",j,arr);


    }

}
