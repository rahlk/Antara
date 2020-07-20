#include<stdio.h>
#include<stdlib.h>
void wues(int N,char P[99999]){
   
    //printf("%d",N);
      
    for(int j=0;P[j]!='\0';j++)
    {
       if(j!=0&&P[j]!=P[j+1])
          printf("%c",P[j-1]);
       else if(P[j]=='E')
          printf("S");
       else
          printf("E");
}
}
int main(void){
    int T,N;
    scanf("%d",&T);
     
    for(int i=0;i<T;i++)
    {   
      char P[99999];
       scanf("%d",&N);
       scanf("%s",P);
      wues(N,P);
      printf("\n");
    }
    }
