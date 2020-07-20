#include<stdio.h>
#include<string.h>
void main(){
    int i,j,t,n;
    char p[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%s",p);
        printf("Case #%d: ",i+1);
        for(j=0;j<strlen(p);j++)
            if(p[j]=='S')
                printf("E");
            else
                printf("S");
        printf("\n");
    }
}
