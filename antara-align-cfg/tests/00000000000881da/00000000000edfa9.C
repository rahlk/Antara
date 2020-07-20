#include<stdio.h>

void Route(char * str){
    if(*(str) == 'E'){
        *(str) = 'S';
        Route(str+1);
    }
    else if(*(str) == 'S'){
        *(str) = 'E';
        Route(str+1);
    }
    
    return;
}

int main(){
    int T,i;
    scanf("%d",&T);
    
    for(i=0;i<T;i++){
        int n=0;
        scanf("%d",&n);
        
        char str[2*n-1];
        scanf("%s",str);
        
        Route(str);
        
        printf("Case #%d: %s\n",i+1,str);
    }
    
    return 0;
}