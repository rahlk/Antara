#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


void func(char arr1[])
{
    int c=0;
    while(arr1[c]!='\0')
    {
         if(arr1[c]=='E')
    {
        arr1[c]=arr1[c]+14;
        c++;
    }
    if(arr1[c]=='S')
    {
        arr1[c]=arr1[c]-14;
        c++;
    }

    }


}
int main()
{
    int x,y,i;
    char arr1[1000];
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        scanf("%d",&y);

        scanf("%s",&arr1);
        func(arr1);
        printf("Case #%d: %s\n",i,arr1);
    }

}
