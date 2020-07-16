#include<stdio.h>
#include<string.h>

int main(){
    int j=0,T;
    unsigned int n=0,p=0,i=0;
    scanf("%d",&T);
    char buf[50000];
    for (j=0;j<T;j++){
     scanf("%u",&n);
     p=(2*n)-2;
     scanf("%s",&buf);
     printf("Case #%d: ",j+1);
    for(i=0;i<p;i++)
        if(buf[i]=='E')
            printf("%c",'S');
        else
            printf("%c",'E');

    printf("\n");
   }

}