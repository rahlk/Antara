#include<stdio.h>
int main(){
int n,i,tc,testcase;
scanf("%d",&testcase);
for(tc=1;tc<=testcase;tc++){
scanf("%d",&n);
int len=2*n-2;
char str1[len];
scanf("%s",&str1);
for(i=0;i<len;i++){

    if(str1[i]=='S'){str1[i]='E';}
    else {str1[i]='S';}
}
printf("Case #%d: %s\n",tc,str1);
}

}
