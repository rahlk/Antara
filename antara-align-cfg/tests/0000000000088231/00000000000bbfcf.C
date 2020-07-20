#include<stdio.h>
void main()
{
    int T,i,N,c=0,temp,flag;
    scanf("%d",&T);
    scanf("%d",&N);
    if(N<999){
    while(T--)
    {   temp=N;
        while(temp!=0)
        {    c++;
            temp=temp/10;
            
        }
        if(c==1)
         {   if(N==4)
              printf("Case #1: 2 2");
            else
               {printf("Case #1: %d %d",N-1,1);}
               flag=1;
         }
        if(c==2)
        {  if(flag==1)
              i=2;
            else
               i=1;
        
          if(N%10==4)
          {
              if(N==44)
              printf("Case #%d: 22 22",i);
              else
              printf("Case #%d: %d %d",i,N-1,1);
          }
          else
           {printf("Case #%d: %d %d",i,N-10,10);}
           
        }
        if(c==3)
        {
            if(i==2)
            i=3;
            else if(i==1)
            i=2;
            else
            i=1;
            if(N==444)
            {
                printf("Case #%d: 222 222",i);
            }
            else if(N%10==4)
            { if((N/10)%10==4)
               {
                  printf("Case #%d: %d 22",i,N-22); 
               }
               else if((N/100)%10==4)
                {
                   printf("Case #%d: %d 202",i,N-202);  
                }
                else
                {
                    printf("Case #%d: %d 1",i,N-1); 
                }
            }
            else if((N/10)%10==4)
            { if((N/100)%10==4)
               {printf("Case #%d: %d 220",i,N-220);   
               }
               else
               {
                  printf("Case #%d: %d 20",i,N-20); 
               }
            }
            else
            {
              printf("Case #%d: %d 200",i,N-200);   
            }
        }
        
    }}
    return 0;
}