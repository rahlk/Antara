#include <stdio.h>
#include <stdlib.h>
int main()
{ char a[112]={}, b[112]={}, c[112]={};
   int i,j,k,t;
   scanf("%d",&t);
   for(k=0; k<t; k++)
   {  scanf("%s",&a);  j=0;
      for(i=0; a[i] ; i++)
        if(a[i]!=52) b[i]=a[i];
        else {b[i]=51;c[j++]=49;i++;goto la;}
        la:
      for(;a[i];i++)
        if(a[i]!=52) {b[i]=a[i];c[j++]=48;}
        else {b[i]=51;c[j++]=49; }
     printf("Case #%d: %s %s\n",k+1,b,c);
    }  return 0;
}
