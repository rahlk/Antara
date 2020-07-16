#include <stdio.h>

#include<stdlib.h>

#include<string.h>

int main()

{

  char s[50000],t[500000];

  int n,a,b,i,k,j,no,nom;

  scanf("%d",&a);

  for(k=1;k<=a;k++)

  {

    scanf("%d",&nom);
    if(nom>=2){
    scanf("%s",s);

    no=strlen(s);

    for(i=0;i<no;i++)

    {

      if(s[i]=='E'){

        t[i]='S';

        j=i+1;

        while(s[i]=='E'){

          t[j]='E';

          i++;

          j++;

        }

         

      }

      else if(s[i]=='S'){

        t[i]='E';

        j=i+1;

        while(s[i]=='S'){

          t[j]='S';

          i++;

          j++;

        }

         

         

      }

    }

    printf("Case #%d: ",k);

    printf("%s",t);

    printf("\n");

     
    }
     

  }

  return 0;

}