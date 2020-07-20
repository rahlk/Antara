#include<stdio.h>
#include<string.h>

int main()
{
    int num=0;
    scanf("%d",&num);
    fflush(stdin);
    for(int cal=0;cal<num;cal++)
   {
     int n=0,t=0;
    scanf("%d",&n);
    fflush(stdin);
    int a[n][n];
    char c[50]={};
    fflush(stdin);
    scanf("%s",c);
    fflush(stdin);
    int i=0,j=0,y=0;

    while(1)
    {
    if(c[y]=='E')
        {i=i;j=j+1;}
    if(c[y]=='S')
        {i=i+1;j=j;}
    if(i==n-1 && j==n-1)

      break;


    y++;

    }
fflush(stdin);
 i=0;
 while(i<strlen(c))
 {
     if(c[i]=='S')
        c[i]='E';
     else if(c[i] == 'E')
        c[i]='S';

     i++;
 }

 printf("Case #%d: %s\n",cal+1,c);
 fflush(stdin);


   }


    return 0;
}
