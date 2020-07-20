#include<stdio.h>
#include<string.h>

int main(){
    int j=0,T;
    unsigned int n=0,p=0,i=0;
    char temp;
    scanf("%d",&T);
    for (j=0;j<T;j++){
     scanf("%u",&n);
     p=(2*n)-2;
     char buf[n];
     scanf("%s",&buf);
     printf("Case #%d: ",j+1);
     if(buf[0]=='E'){
         for(i=0;i<p/2;i++)
            printf("%c",'S');
         for(i=p/2;i<p;i++)
            printf("%c",'E');
     }else {
          for(i=0;i<p/2;i++)
            printf("%c",'E');
          for(i=p/2;i<p;i++)
            printf("%c",'S');

     }

   }

}