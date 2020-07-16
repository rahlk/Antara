#include<stdio.h>
int main(){
int n,i,tc,testcase,len;
scanf("%d",&testcase);
for(tc=1;tc<=testcase;tc++){
scanf("%d",&n);
len=(2*n)-2;
char str1[len],str2[len];
scanf("%s",&str1);
for(i=0;i<len;i++){

    if(str1[i]=='S'){str2[i]='E';}
    else {str2[i]='S';}
}
printf("Case #%d: %.*s\n",tc,len,str2);
}

}
