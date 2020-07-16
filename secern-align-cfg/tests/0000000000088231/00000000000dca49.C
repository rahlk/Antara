#include<stdio.h>
void main()
{
      int t,i,j;
       scanf("%d",&t);
       if(t<100)
       {
       for(i=1;i<=t;i++)
       {
        unsigned long sum,n1,n2,k1,k2,n3,n;
           int flag=0;
           scanf("%d",&n);
           for(j=n-1;j>n/2;j--)
          {
              flag=0;
              n1=j;
              n2=n-j;
              n3=n-j;
              while(n1!=0)
              {
                  k1=n1%10;
                  if(k1==4)
                  {
                      flag=1;
                     break;
                  }
                  else
                  {
                      n1=n1/10;
                  }
              }

              if(flag==0)
              {
                  while(n2!=0)
              {
                  k2=n2%10;
                  if(k2==4)
                  {
                      flag=1;
                     break;
                  }
                  else
                  {
                      n2=n2/10;
                  }
              }

              }
              if(flag==0)
              {
            printf("Case #%d: %d %d",i,j,n3);
                break;

              }
                  }




       }}
}
