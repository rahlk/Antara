#include<stdio.h>
#include<string.h>

long int W[100],R[100],A[26],j=0,k=0,P[100];
long int N,T,L;

void prime()
{
    int k=0;
    for(int i=2;i<=N;i++)
    {
       int c=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                c++;
                break;
        }
        if(c==0)
            P[k++]=i;
    }
    int n=k;
}

void value(int a)
{
    int i=0;
    for(i=0;i<100;i++);
    {
        int m=i;
        while(m!=100)
        {
            if(P[i]*P[m]==a)
            {
                R[j++]=P[i];
                R[j++]=P[m];
                W[k++]=P[i];
                W[k++]=P[m];
            }
                m++;
        }
    }
}

void arrange()
{
    int t;
        if(R[0]==R[2])
           {
                 t=R[0];
                    R[0]=R[1];
                    R[1]=t;
           }
          else if(R[0]==R[3])
          {
                    t=R[0];
                    R[0]=R[1];
                    R[1]=t;
                     t=R[2];
                    R[2]=R[3];
                    R[3]=t;
              
          }
          
          else if(R[1]==R[3])
          { 
                    t=R[2];
                    R[2]=R[3];
                    R[3]=t;
          }
          
        for(int i=3;i<100;i+=2)
        {
            if(R[i]==R[i+2])
                {
                    t=R[i+1];
                    R[i+1]=R[i+2];
                    R[i+2]=t;
                }
            
        }
        
}




void letters()
{long int t,i;
  for(i=0;i<sizeof(W )-1;i++)
  {
      for(j=0;j<sizeof(W)-i-1;j++)
      {
          if(W[j]>W[j+1])
          { t=W[j];
          W[j]=W[j+1];
          W[j+1]=t;
       
          }
      }
  }
  for(i=1;i<sizeof(W);i++)
  {
    int k=0,c=W[0];
     if(W[i]!=c)
     {
         c=W[i];
         A[k++]=c;
     }
 }
     
  
}

char* dmess()
{ 
    int c=0;
    char message[L];
    for(int i=0;i<2*L;i++)
{
    for(j=0;j<26;j++)
    if(R[i]==A[j])
    message[c++]=j+65;
}
    message[c]='\0';
    return  message;
    
}

 int main()
{
    
    int a,k=1;
    scanf("%d",&T);
    while(int k<=T){
    scanf("%ld",&N);
    scanf("%ld",&L);
     prime();
    for(int i=0;i<L;i++)
    {
         scanf("%ld",&a);
         value(a);
    }
   
   arrange();
    letters();
    char message[L];
    strcpy(message,dmess());
    printf("Case #%d: %s",t,message);
    }
    return 0;
    
}

    



