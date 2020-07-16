#include<stdio.h>
 char arr[100][100];
  int r,c,i,j;
  int out1=0,out2=0,out=0,duo=0;
void check(int i1,int j1){
   int row,col;
    for(col=0;col<c;col++){
        if(arr[i1][col]=='#'){out1=0;break;}
        else{out1=1;}
    }
     for(row=0;row<r;row++){
        if(arr[row][j1]=='#'){out2=0;break;}
        else{out2=1;}
    }
    if(out1>0 && out2>0){duo++;}
    out+=out1+out2;
    
}
void main(){
    int testcase,tc;
    scanf("%d",&testcase);
    for(tc=1;tc<=testcase;tc++){
   int dot=0;
     out1=0;out2=0;out=0;duo=0;
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++){

            scanf("%s",&arr[i]);

    }


    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
              if(arr[i][j]=='.'){
            check(i,j);
            dot++;}
        }
    }
    int cal=(dot-duo*2);
    if((cal%2)==0 || cal<0){
    printf("Case #%d: %d\n",tc,out);}
    else{
        printf("Case #%d: 0\n",tc);
    }}
}
