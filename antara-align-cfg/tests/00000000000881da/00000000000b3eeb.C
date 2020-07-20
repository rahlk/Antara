#include<stdio.h>

int main() {
  char c;
  unsigned int arr[65000],T,dim,dif,turn=1,p=11,i=0,j;
  scanf("%d",&T);
  for(int t=1;t<=T;t++)
  { 
      printf("Case #%d: ",t);
      scanf("%d",&dim);
      scanf("%c",&c);
      scanf("%c",&c);
      arr[i]=11;
      while(c!='\n')
      {
          if(c=='S')
          {
              arr[i+1]=arr[i]+10;
          }
          
          if(c=='E')
          {
              arr[i+1]=arr[i]+1;
          }
          scanf("%c",&c);
          i++;
      }
      i=0;
      
      for(j=0;j<=(dim*2-2);j++)
      {
          if(arr[j]==p)
          {
              dif=arr[j+1]-arr[j];
              if(dif==1)
              {
                  p=p+10;
                  printf("S");
                  p=p+1;
                  printf("E");
                  j++;
                  turn = 1;
              }
              
              if(dif==10)
              {
                  p=p+1;
                  printf("E");
                  p=p+10;
                  printf("S");
                  j++;
                  turn = 10;
              }
          }
          else
          {
               p=p+turn;
              if(turn==10)
              {
                  printf("S");
              }
              if(turn==1)
              {
                  printf("E");
              }
          }
      }
      p=11;
      printf("\n");
  }
   return 0;
}
