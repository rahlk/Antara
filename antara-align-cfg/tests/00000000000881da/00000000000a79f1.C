#include<stdio.h>
int main()
{
    int num,l,i,t,c;
    scanf("%d",&t);
    for(c=0;c<t;c++){
    scanf("%d",&num);
    l=(2*num)-2;
    char in[l],out[l],search;
    scanf("%s",&in);
    for(i=0;i<l;i++){
    if(in[i]=='S')
    {
        out[i]='E';
    }
    else
    {
        out[i]='S';
    }
    }
    printf("Case #%d: %.*s\n",c+1,l,out);
}
}
