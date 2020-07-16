#include<stdio.h>
#include<string.h>
 main()
 {
  int a,i,j,c=0,a1=0,b=0;
  char str[110],path1[100]="\0",path2[100]="\0";
  printf("enter the size of maze");
  scanf("%s,&a");
  printf("enter the path which is already used");
  scanf("%s",&str);
  for(i=0;i<(2*a-2);i++)
  {
   if(str[i]=='E')
   {
       a1++;
   path1[i]='S');
   }
   else if(str[i]=='S')
   {
   path1[i]='E');
    b++;
   }
   else
   {
    c++;
    for(j=0;j<a-1;j++)
    {
     path2[2*j]='E';
     path2[2*j+1]='S');
    }
   }
  }
    if(c>=1)
    printf("%s",path2);
    if(a1!=b)
    printf("%s",path2);
    else
    printf("%s",path1);
}