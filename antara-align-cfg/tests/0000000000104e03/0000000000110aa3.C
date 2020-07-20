#include<stdio.h>
#include<stdlib.h>

int main()
{
int k,a,s,i,j,str,stc;
scanf("%d",&k);
for(i=0;i<k;i++)
{
scanf("%d %d\n",&a,&s);
if(a=s){
    printf("case #1: IMPOSSIBLE\n");
}
printf("case #2: POSSIBLE\n");
str=a;
stc=s-a;
for(i=str;i<a;i++)
{
    for(j=stc;j<s;j++)
    {
        printf("%d %d\n",i,j);
        j++;
        if(j==s)
        {
            j=1;
        }
    }
}
}
return 0;
}
        