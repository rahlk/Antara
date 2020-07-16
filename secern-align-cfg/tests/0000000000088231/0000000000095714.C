#include<stdio.h>// At least One digit of  n is 4

int main()
{
    int t,k;
    scanf("%d",&t);

    for(k=1;k<=t;k++)
    {   int n;
        scanf("%d",&n);
        int r,a=0,b=0,temp1 ,temp2,flag1=0,flag2=0;
          // yah pe sayad loop nahi lagegA
           //flag = 0;
          
           if(n%2==0)
            {   a = n/2;   /// And then only prcoeding Further
                b = n/2;
            }
            else
            {
               a = n/2;
               b = n/2 + 1;
            }
            temp1 = a,temp2 = b;
           while(temp1>0)
            {   r = temp1 % 10;
             temp1 = temp1 / 10;
               if(r==4)
               {flag1 = 1;
                 break;}
            }
            while(temp2>0)
           {  r = temp2 % 10;
              temp2 = temp2 / 10;
              if(r==4)
             {flag2 = 1;
              break;}
           }
            while(flag1!=0 || flag2!=0)
       {
            if(flag1 == 1)
           {
               if(a%2==0)
            {    a = a/2;
                 b = b + a;
            }
            else
            {    a = a/2;
                 b = b + a + 1;
            }
          }
          else if(flag2 == 1)
           {
               if(n%2==0)
            {    b = b/2;
                 a = b + a;
            }
            else
            {    b = b/2;
                 a = b + a + 1;
            }
          }
          flag1 = 0,flag2 = 0;
          temp1 = a,temp2 = b;
           while(temp1>0)
             {  r = temp1 % 10;
                temp1 = temp1 / 10;
                if(r==4)
                {flag1 = 1;
                 break;}
             }
            while(temp2>0)
           {   r = temp2 % 10;
              temp2 = temp2 / 10;
              if(r==4)
             {flag2 = 1;
              break;}
           }
        }
       

        printf("Case #%d: %d %d",k,a,b);  //a,b
    }

    return 0;
}
