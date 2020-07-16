#include<stdio.h>
#include<string.h>
int main()
{
    char sp[100000];
    int t,n,i,y=1;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
scanf("%s",sp);
for(i=0;i<(2*n-2);i++)
{
    if(sp[i]=='E')
        sp[i]='S';
    else
        sp[i]='E';
}
    printf("Case #%d: ",y);
    y++;
    for(i=0;i<(2*n-2);i++)
    printf("%c",sp[i]);
    printf("\n");


}

}
