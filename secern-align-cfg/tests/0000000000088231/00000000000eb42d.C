#include<stdio.h>
#include<string.h>
#include<stdbool.h>
char a[200],b[200];
int a_start,b_start;
void test()
{
  scanf("%s",a);
  a_start=0;
  b_start=0;
  int n=strlen(a);
  strcpy(b,a);
  a[n+1]=0;
  b[n+1]=0;
  bool any_four=false;
  for(int i=0;i<n;i++)
  {
    if(a[i]=='4')
    {
      a[i]='2';
      any_four=true;
    }
  }
  if(any_four)
  {
    b_start=-1;
    for(int i=0;i<n;i++)
    {
      if(b[i]=='4') b[i]='2';
      else b[i]='0';
      if (b_start==-1 && b[i]!='0')
        b_start=i;
    }
    return;
  }
    //TODO
  int pos=n-1;
  while(pos!=0)
  {
    b[pos]='0';
    if(a[pos]!='0')
    {
      if(a[pos]=='5')
      {
        a[pos]--;
        b[pos]++;
      }
      a[pos]--;
      b[pos]++;
      b_start=pos;
      return;
    }
    pos--;
  }
  if(pos==0)
  { 
    b[pos]='0';
    if(a[pos]>'1')
    {
      if(a[pos]=='5')
      {
        a[pos]--;
        b[pos]++;
      }
      a[pos]--;
      b[pos]++;
      b_start=pos;
      return;
    }
    a[pos+1]='5';
    b[pos+1]='5';
    a_start=1;
    b_start=1;
  }
}
int main()
{
  int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++)
  {
    test();
    printf("Case #%d: %s %s\n",i,a+a_start,b+b_start);
  }
}
