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
  int n,count=0,cnt=0;
  scanf("%d",&n);
  ch c[n];
  int j;
  for(j=0;j<n;j++)
  {
   scanf("%s",&c[j].s);
  }
  char rhym1[4],rhym2[4];
  int k,flag;
  char chk[n][4];
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
     flag=0;
     for(int c=0;c<cnt;c++)
     {
      if(strcmp(chk[c],rhym1)==0) flag++;
     }
     if(flag==0)
     {
     count=count+2;
     strcpy(chk[cnt],rhym1);
     cnt++;
     }
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
     flag=0;
     for(int c=0;c<cnt;c++)
     {
      if(strcmp(chk[c],rhym1)==0) flag++;
     }
     if(flag==0)
     {
     count=count+2;
     strcpy(chk[cnt],rhym1);
     cnt++;
     }
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
      flag=0;
     for(int c=0;c<cnt;c++)
     {
      if(strcmp(chk[c],rhym1)==0) flag++;
     }
     if(flag==0)
     {
     count=count+2;
     strcpy(chk[cnt],rhym1);
     cnt++;
     }
      }
      else
      {
       rhym1[0]=c[j].s[strlen(c[j].s)-1];
       rhym1[1]='\0';
       rhym2[0]=c[j+1].s[strlen(c[j+1].s)-1];
       rhym2[1]='\0';
       if(rhym1[0]==rhym2[0])
       {
        flag=0;
        for(int c=0;c<cnt;c++)
        {
         printf("\n%s %s\n",chk[c],rhym1);
         if(chk[c][0]==rhym1[0]) flag++;
        }
        if(flag==0)
        {
         count=count+2;
         chk[cnt][0]=rhym1[0];
         cnt++;
        }
       }
      }
     }
    }
   }
  printf("Case #%d : %d",i+1,count);
 }
 return 0;
}