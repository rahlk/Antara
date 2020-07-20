#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
int t;
long long int j=0;
scanf("%d",&t);
int k=0;
while(t--)
{
    int n;
    k++;
    scanf(" %d",&n);
    char b[2*n-2];
    char a[2*n-2];
    for(int i=0;i<2*n-2;i++)
    {
    scanf(" %c",&b[i]);
    if(b[i]=='E')
        a[i]='S';
    else
        a[i]='E';
    }
    printf("Case #%d: ",k);
    for(int i=0;i<2*n-2;i++)
    {
    printf("%c",a[i]);
    }
    printf("\n");
}


}
