#include<stdio.h>
#include<stdlib.h>
int main()
{int a,b,c,i,j,str,str1;
scanf("%d ",&a);
for (i=0;i<a;i++)
{
    scanf("%d %d\n",&b,&c);
    if(b==c){
    printf("IMPOSSIBLE\n");
    }
        printf("POSSIBLE\n");
    str=b;
    str1=c-b;
    for (i=str;i<b;i++)
{
 for(j=str1;j<c;j++)
 {
  printf("%d %d\n",i,j);
  j++;
  if(j==c)
  {
   j = 1;
}
}
}
}
return 0;
}