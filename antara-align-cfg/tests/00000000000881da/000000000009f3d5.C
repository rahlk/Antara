#include<stdio.h>

void con(int n,char va[])
{
    int a[n][n],i,j,xval=0,yval=0;
    a[0][0]=1;
    a[n][n]=1;
    for(i=0;i<(2*(n-1));i++)
    {
        if(va[i]=='S')
            i=i++;
        else if(va[i]=='E')
            j=j++;
    
        a[i][j]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i+1][j]==1){
                printf("S");yval++;}
            else if(a[i][j+1]==1){
                printf("E");xval++;}
            else if(xval>yval)
            {
                printf("S");yval++;
            }
            else if(xval<yval)
            {
                printf("E");xval++;
            }
        }
    }
}
void main()
{
    int n,k,n1;
    char va[50];
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&n1);
        scanf("%s",va);
        con(n1,va);
    }
    
}