#include<stdio.h>
#include<stdlib.h>

int main()
{
int a,n,e,i,j,str,stc;
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d %d\n",&n,&e);
if(n=e){
    printf("case #1: IMPOSSIBLE\n");
}
printf("case #2: POSSIBLE\n");
str=n;
stc=e-n;
for(i=str;i<n;i++)
{
    for(j=stc;j<e;j++)
    {
        printf("%d %d\n",i,j);
        j++;
        if(j==e)
        {
            j=1;
        }
    }
}
}
return 0;
}