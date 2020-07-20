#include<stdio.h>
#include<string.h>
int main()
{
    char a[1002];
    int i,j,t,b,len,cas=1;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&b);
        scanf("%s",a);
        len=strlen(a);
        for(j=0;j<len;j++){
            if(a[j]=='S') a[j]='E';
            else if(a[j]=='E') a[j]='S';
        }
          printf("Case #%d: ",cas++);
          for(j=0;j<len;j++){
            printf("%c",a[j]);
          }
          printf("\n");
}
        }

