#include<stdio.h>

#include<malloc.h>

int main()

{

    int *c,n,i,k,s1,s2,flag1,flag2,st,st1,st2;

    scanf("%d",&n);

    c=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)

    {

        scanf("%d",&c[i]);

    }

    for(i=0;i<n;i++)

    {

        s1 = c[i]%2==0 ? c[i]/2 : (c[i]+1)/2;

        s2=c[i]-s1;

        while(1)

        {

           flag1=0;flag2=0;

           st1=s1;

           while(st1>0)

           {

             k=st1%10;

             st1=st1/10;

             if(k==4)
 
             {

                flag1=1;

                st=s1;

                s1=s1%2==0 ? s1/2 : (s1+1)/2;

                s2=s2+(st%2==0 ? s1 : (s1-1));

                break;

             }

            }

            st2=s2;

           while(st2>0)

           {

             k=st2%10;

             st2=st2/10;

             if(k==4)
 
             {

                flag2=1;

                st=s2;

                s2=s2%2==0 ? s2/2 : (s2+1)/2;

                s1=s1+(st%2==0 ? s2 : (s2-1));

                break;

              }

            }

         if(flag1==0 && flag2==0) break;

        }

     
   printf("Case #%d: %d %d \n",i+1,s1,s2);

     }


}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    