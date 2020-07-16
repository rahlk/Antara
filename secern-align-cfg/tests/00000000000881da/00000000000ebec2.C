#include <stdio.h>
#include <string.h>

int main() {int t;
scanf("%d",&t);

for(int i=0;i<t;++i)
{
    int n;
    scanf("%d",&n);
    char arr[2*n-1];
    scanf("%s",arr);
    
    char brr[2*n-1];
    for(int j=0;j<2*n-2;j++)
    if(arr[j]=='S')brr[j]='E';
    else brr[j]='S';
    
    brr[2*n-2]='\0';
    
    printf("%s\n",brr);
}
    return 0;
}