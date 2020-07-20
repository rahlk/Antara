#include<stdio.h>
#include<stdlib.h>
void main()
{
  unsigned long N,T,A,B,num,rem,d,c=0;
  scanf("%lu",&T);
  for(i=0;i<T;i++)
  {
     scanf("%lu",&N);
     label:
     num=A=rand()%N;
     while(num>0)
     { rem=num%10;
       if(rem==4)
       goto label;
       num=num/10;
     }
     d=B=N-A;
            while(d>0)
        {
             rem=d%10;
             if(rem==4)
             goto label;
             d=d/10;
        }

  printf("Case #%d: %d %d\n",i+1,A,B);
}
exit(0);
}