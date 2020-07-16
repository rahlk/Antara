#include<stdio.h>
#include<stdlib.h>

void main(){
  int t,x,rev=0;
  scanf("%d",&t);
  int *val,temp,*n,i,*val1,*val2;
  val=malloc(t*sizeof(int));
  val1=malloc(t*sizeof(int));
  val2=malloc(t*sizeof(int));
  n=malloc(t*sizeof(int));

  for(i=0;i<t;i++){
    scanf("%d",&val[i]);
    val1[i]=val[i];
    val2[i]=0;
    n[i]=0;
  }
  for(x=0;x<t;x++){
   for(;val[x]!=0;){
     temp=val[x]%10;
     val[x]/=10;
     val2[x]*=10;
     if(temp==4)
     val2[x]+=1;
     n[x]++;
   }
  }

  for(x=0;x<t;x++){
    for(i=0;i<n[x];i++){
      rev=rev*10;
      rev=rev+val2[x]%10;
      val2[x]=val2[x]/10;
    }
    val2[x]=rev;
    rev=0;
  }

  for(i=0;i<t;i++){
    printf("%d\t%d\n",val1[i]-val2[i],val2[i]);
  }
}
