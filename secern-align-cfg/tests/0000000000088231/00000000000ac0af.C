#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    int i,j,n,tmp=0;
    char temp[1000],fp;
    for(i=1;i<=t;i++){
                      scanf("%d",&n);
                      sprintf(temp,"%d",n);
                      int l=strlen(temp);
                      for(j=l-1;j>=0;j--){
                          if(temp[j]=='4'){
                              temp[j]='2';
                              tmp+=2*pow(10,l-j-1);
                          }
                      }
                    printf("Case #%d : %s %d\n",i,temp,tmp);
                    tmp=0;
    }
    return 0;
}
