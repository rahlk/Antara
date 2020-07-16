#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<=t;i++)
    {
        char arr[1000];
        gets(arr);
        for(int j=0;j<1000;j++)
        {
            if(arr[j]=='S')
            {
                arr[j]='E';
                continue;
            }
            if(arr[j]=='E')
            {
                arr[j]='S';
            }




        }
        puts(arr);
    }
    return 0;
}
