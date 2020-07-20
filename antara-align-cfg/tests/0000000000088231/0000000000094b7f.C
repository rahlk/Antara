#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char n[100];
        char x[100];
        char y[100];
        scanf("%s",n);
        int j=0,c=0;
        while(n[j]!='\0'){
            if(n[j] == '4' ){
                x[j] = '3' ;
                y[c] = '1' ;
                c++;
            }
            else{
                x[j] = n[j];
                if(c>0)
                {
                    y[c] = '0';
                    c++;
                }
            }
            j++;
            }
            x[j]='\0'; 
            y[c]='\0';
        printf("Case #%d: %s %s\n",i+1,x,y);
    }
}