#include<stdio.h>
void main(){
    int test,tc,row,i,c;
    char arr[100][100];
char arr1[100];
    scanf("%d",&test);
    for(tc=1;tc<=test;tc++){
       c=0;
scanf("\n%d",&row);

for(i=0;i<row;i++){
    scanf("\n%s",arr[i]);
    arr1[i]=arr[i][0];
}
for(i=0;i<row-1;i++){
    if(arr1[i]==arr1[i+1]){
        c=0;
    }
    else{
        c=1;
        break;
    }
}
if(c==1){
    printf("Case #%d: IMPOSSIBLE\n",tc);
}
else{
    char temp=arr1[0];
    if(temp=='R') printf("Case #%d: P\n",tc);
    else if(temp=='S') printf("Case #%d: R\n",tc);
    else if(temp=='P') printf("Case #%d: S\n",tc);
}}
}
