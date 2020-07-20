#include<stdio.h>
main()
{
    int i,t,j;
    scanf("%d",&t);
    int n[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        int k = 2*n[i]-2;
        char arr[t][k];
        printf("Case #%d: ",i+1);
        for(j=0;j<k+1;j++)
        {
            scanf("%c",&arr[i][j]);
            //printf("%c 10",arr[i][j]);
            if(arr[i][j]=='E')
                arr[i][j]='S';
            else
                arr[i][j]='E';
            if(j==0)
                continue;
            printf("%c",arr[i][j]);
        }
        
        /*for(j=0;j<k;j++)
        {
            
        }*/
        printf("\n");
    }
    /*for(i=0;i<t;i++)
    {
        
    }
    for(i=0;i<t;i++)
    {
        
    }*/
}