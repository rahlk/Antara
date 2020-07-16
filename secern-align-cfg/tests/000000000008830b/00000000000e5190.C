#include<stdio.h>
int main(void)
{
  int T=0;
  int count=1;
  long long int N=0;
  int L=0;
  int i=0,j=0;
  int p[26];
  int m=0;
  char alpha[27]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
  scanf("%d",&T);
  while(count<=T)
  {
    scanf("%ld %d",&N,&L);
    int pro[L];
    for(i=3;i<=N;i++)
    {
      for(j=2;j<i;j++)
      {
        if(i%j==0)
        break;
      }
      if(i==j && i%2!=0 && m<26)
      {
        p[m]=i;
        m++;
      }
    }
   for(i=0;i<L;i++)
   {
     scanf("%d",&pro[i]);
   }
   m=0;
   int ch=0;
   char str[L+1];
   for(m=0;m<(L+1);m++)
   {
     for(i=ch;i<26;i++)
     {  
       for(j=0;j<26;j++)
       {
	 if((p[i]*p[j])==pro[m])
	 {
	   str[m]=alpha[i];
    	   ch=j;
	   j=26;
	   i=26;
	 }
       }
     }
   }
   printf("Case #%d: %s \n",count,str);
   count++;
  }
  return 0;
}
