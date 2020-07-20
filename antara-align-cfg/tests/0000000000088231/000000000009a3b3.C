#include<stdio.h>
#include<stdlib.h>

void find(int t);
void main(){
  int t;
  scanf("%d",&t);
  find(t);
}

void find(int t){
  int x,rev=0;
  int val[t],temp,n[t],i,val1[t],val2[t];

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
    printf("Case #%d: %d %d\n",i+1,val1[i]-val2[i],val2[i]);
  }
}
