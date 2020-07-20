#include <stdio.h>
int a[100],b[100],c[100];
void deletedup(int l)
{
  int i,j;
  for(i=0;i<l-1;i++)
  {
    if(b[i]==b[i+1])
   { for(j=i;j<l-1;j++)
    b[j]=b[j+1];
   i--;
     l--;
   }
  }
}


int main()
{
    int t,no=0,l,len,n,i,j,p;
    char ch[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d",&t);
    while(t--)
    {
        printf("Case #%d: ",++no);
       scanf("%d",&n);
        scanf("%d",&l);
        for(i=0;i<l;i++)
        scanf("%d",&a[i]);
        p=3;
        for(i=3;;i+=2)
        if(!(a[0]%i) && !(a[1]%i))
        break;
        p=i;
        b[0]=a[0]/p;
        b[1]=p;
        c[0]=b[0];
        c[1]=b[1];
        for(i=2;i<l+1;i++)
       {
         b[i]=a[i-1]/p;
         p=b[i];
         c[i]=b[i];
       }
      for(i=0;i<l+1;i++)
      for(j=i+1;j<l+1;j++)
      if(b[i]>b[j])
      {
          p=b[i];
          b[i]=b[j];
          b[j]=p;
      }
       deletedup(l+1);
      for(i=0;i<l+1;i++)
      {
          for(j=0;j<26;j++)
          if(c[i]==b[j])
          break;
          printf("%c",ch[j]);
      }
      printf("\n");
    }
    return 0;
}
