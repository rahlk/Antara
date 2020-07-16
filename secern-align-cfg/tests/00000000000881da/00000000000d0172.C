#include<stdio.h>
int main()
{


  char s[100000];
  int n,t,k=0,i=0,j=1;
scanf("%d",&t);
  while(t--)
    {k=0;
    scanf("%d",&n);
       scanf("%s",&s);
         printf("Case #%d: ",j);
        while(s[k]!='\0')
          {
           if(s[k]=='E')
             printf("S");
           else
            printf("E");
        k++;}
     j++;
       printf("\n");
    }
return 0;
}
