#include<stdio.h>
int main()
{
    long int num,l,i,t,c;
    scanf("%ld",&t);
    for(c=0;c<t;c++){
    scanf("%ld",&num);
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
    printf("Case #%ld: %.*s\n",c+1,l,out);
}
}
