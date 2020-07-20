#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{

     char s[100000];
     int i,t,y,j=1;
    long int no,s1,x;
     scanf("%d",&t);
     while(t--)
  {   i=0; no=0,x=0,s1=0;
       scanf("%s",s);
       y=strlen(s);

      while(s[i]!='\0')
      {
        no=(no*10)+(s[i]-48);
        i++;
      }
                     i=0;
                     while(s[i]!='\0')
                     {
                          if(s[ i]-48==4)
                          {
                             x=pow(10,(y-i-1));
                             no=no-x;
                             s1+=x;
                          }
                      i++;
                     }
     printf("case #%d %ld %ld",j,no,s1);
     j++;
   }
 return 0;}
