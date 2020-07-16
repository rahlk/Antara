#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int a=1;a<=t;a++)
{
int x,i;
scanf("%d",&x);
 char arr[(2*x)-2];
 char garr[(2*x)-2];
 scanf("%s",arr);
 for(i=0;i<(2*x)-2;i++)
    {
    if(arr[i]=='E')
    {
        garr[i]='S';
    }
    else if(arr[i]=='S')
    {
        garr[i]='E';
    }
    }
     printf("Case #%d: ",a);
    for(i=0;i<(2*x)-2;i++)
     printf("%c",garr[i]);
     printf("\n");
}

}
