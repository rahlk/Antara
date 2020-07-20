#include<stdio.h>
int checkfor4(int k)
{   int j,m1,m2=1,x=0;
        for(j=m2;m2>0;j++)
        {
            m1=k%10;
            m2=k/10;
            if(m1==4)
            {
             x=m1;
            }
            k=m2;
        }
        return x;
}
        
int main()
{
    int n[100],i,j,t,n1,n2,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        
    }
    for(j=0;j<t;j++)
    {
        n1=n[j]/2;
        n2=n[j]-n1;
    

do{
    x = checkfor4(n1);
    if(x==4)
    {
        n1++;
        n2--;
    }
    else
    {
        x = checkfor4(n2);
          if(x==4)
          {
              n1++;
              n2--;
          }
          else
          {
              printf("Case #%d: %d %d\n",(j+1),n1,n2);
          }
    }
}while(x==4);
}
return 0;
}
    
