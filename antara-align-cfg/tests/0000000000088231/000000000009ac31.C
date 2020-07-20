#include<stdio.h>
#include<conio.h>
main()
{
  int number[4],r;
  printf("Enter any four digits:");
  for(r=1;r<5;r++)
  {
      scanf("%d",&number[r]);
  }
  for(r=1;r<4;r++)
  {
      printf("Case#",r);
      printf(":%d %d",r+1,r+1);
  }
    getch();
}