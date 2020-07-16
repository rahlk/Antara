#include<stdio.h>
#include<string.h>
typedef struct abc
{
 char s[20];
}ch;
int main()
{
 int test,i;
 scanf("%d",&test);
 for(i=0;i<test;i++)
 {
  int n,count=0;
  scanf("%d",&n);
  ch c[n];
  int j;
  for(j=0;j<n;j++)
  {
   scanf("%s",&c[j].s);
  }
  char rhym1[4],rhym2[4];
  int k;
   for(j=0;j<n;j=j+2)
   {
    rhym1[0]=c[j].s[strlen(c[j].s)-4];
    rhym1[1]=c[j].s[strlen(c[j].s)-3];
    rhym1[2]=c[j].s[strlen(c[j].s)-2];
    rhym1[3]=c[j].s[strlen(c[j].s)-1];
    rhym2[0]=c[j+1].s[strlen(c[j+1].s)-4];
    rhym2[1]=c[j+1].s[strlen(c[j+1].s)-3];
    rhym2[2]=c[j+1].s[strlen(c[j+1].s)-2];
    rhym2[3]=c[j+1].s[strlen(c[j+1].s)-1];
    if(strcmp(rhym1,rhym2)==0)
    {
     //printf("%s\n",rhym1);
     count=count+2;
    }
    else
    {
     rhym1[0]=c[j].s[strlen(c[j].s)-3];
     rhym1[1]=c[j].s[strlen(c[j].s)-2];
     rhym1[2]=c[j].s[strlen(c[j].s)-1];
     rhym1[3]='\0';
     rhym2[0]=c[j+1].s[strlen(c[j+1].s)-3];
     rhym2[1]=c[j+1].s[strlen(c[j+1].s)-2];
     rhym2[2]=c[j+1].s[strlen(c[j+1].s)-1];
     rhym2[3]='\0';
     if(strcmp(rhym1,rhym2)==0)
     {
     //printf("%s\n",rhym1);
     count=count+2;
     }
     else
     {
      rhym1[0]=c[j].s[strlen(c[j].s)-2];
      rhym1[1]=c[j].s[strlen(c[j].s)-1];
      rhym1[2]='\0';
      rhym2[0]=c[j+1].s[strlen(c[j+1].s)-2];
      rhym2[1]=c[j+1].s[strlen(c[j+1].s)-1];
      rhym2[2]='\0';
      if(strcmp(rhym1,rhym2)==0)
      {
      //printf("%s\n",rhym1);
      count=count+2;
      }
      else
      {
       rhym1[0]=c[j].s[strlen(c[j].s)-1];
       rhym1[1]='\0';
       rhym2[0]=c[j+1].s[strlen(c[j+1].s)-1];
       rhym2[1]='\0';
       if(rhym1[0]==rhym2[0])
       {
        //printf("%s\n",rhym1);
        count=count+2;
        break;
       }
      }
     }
    }
   }
  printf("Case #%d : %d",i+1,count);
 }
 return 0;
}