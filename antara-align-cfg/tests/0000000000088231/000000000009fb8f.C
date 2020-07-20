#include<stdio.h>
#include<math.h>
#include<stdlib.h>

main()
{
   int t,l,i;
   char a[1000],b[1000];
    scanf("%d",&t);
    while(t--)
    {i=0;

        scanf("%s",a);
     
       for(i=0;a[i]!='\0';i++)
       {
           if(a[i]=='4')
           {
               a[i]='3';
               b[i]='1';
           }
           else
            b[i]='0';
       }
       b[i]='\0';
printf("%s ",a);
i=0;
while(b[i]=='0')
    i++;

    if(b[i]=='\0')
    {
        printf("0\n");
        continue;
    }
for(;b[i]!='\0';i++)
{
    printf("%c",b[i]);
}
printf("\n");

    }
}

