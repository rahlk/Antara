#include<stdio.h>
#include<string.h>

int valueCheck(int N) {
    char s[40];
    int i,len=sprintf(s,"%d",N);
    for(i=0;i<len;i++){
        if(s[i]=='4') return 0;
    }
    return 1;
}

int main() {
    char s[40];
    int N,k,value,len,i,j,x,y;
    scanf("%d",&N);
    for(k=0;k<N;k++){
        x=0;
        scanf("%d",&value);
        len = sprintf(s,"%d",value);
        char new_num[len+1];
        for(j=0;j<len;j++) new_num[j]='0';
        new_num[len]='\0';
        for(j=len-1;j>=0;j--) {
            if(s[j]=='4') new_num[j]='1';
        }
        sscanf(new_num,"%d",&y);
        for(;y<value;y++) {
          if(valueCheck(value-y) && valueCheck(y)){
            printf("Case #%d: %d %d\n",k+1,value-y,y);
            break;
          }
        }
    }
}