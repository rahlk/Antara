#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,x=1;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
char s1[2*n-2];
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
