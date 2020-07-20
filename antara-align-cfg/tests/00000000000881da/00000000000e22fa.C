#include<stdio.h>
#include<string.h>
void main(){
  int T;
  int S1=1;
  scanf("%d",&T);
  while(T--){
    int N;
    scanf("%d",&N);
    int s1= N+N-2;
    char str[s1+1];
    scanf("%s",str);
      for(int i=0;i<s1;i++){
        if(str[i]==83)//S=83
          str[i]=69;//E=69
        else if (str[i]==69)
            str[i]=83;
          }
    printf("Case #%d: %s\n",S1,str);
    S1++;
  }
}
