#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100000];
    int t,n,i,x=1;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
scanf("%s",s1);
for(i=0;i<(2*n-2);i++)
{
    if(s1[i]=='E')
        s1[i]='S';
    else
        s1[i]='E';
}
    printf("Case #%d: ",x);
    x++;
    for(i=0;i<(2*n-2);i++)
    printf("%c",s1[i]);
    printf("\n");


}

}
