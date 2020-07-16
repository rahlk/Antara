#include<stdio.h>
void main()
{
  int T,f1,f2,i,temp;
  scan("%d:, &f);
  int N[T],A,B,bk;
  for(i=1;i<101 && i<=T; i++)
  {
      scanf("%d",&N[i]);
  }
  for(i=1; i<101 && i<=T ; i++)
    {
        for(A=N[i] ; A>0 ;A++)
        {
            bk=A;
            while (bk!=0)
            bk/=10;
            if(temp==4)
            f1++;
        }
        for(B=1;B<N[i];B++)
        {
            bk=B;
            while(bk!=0)
            {
                temp=bk%10;
                bk/=10;
                if(temp==4)
                f2++;
            }
        if(f1==0 && f2==0 && (A+B)==N[i])
            {
                printf("Case #&d: %d %d\n",i,A,B);
                goto label;
            }
            f2=0;
        }
         f1=0;   
            
        }
    }