#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char n[100];
        char x[100];
        char y[100];
        scanf("%s",n);
        int i=0,c=0;
        while(n[i]!='\0'){
            if(n[i] == '4' ){
                x[i] = '3' ;
                y[c] = '1' ;
                c++;
            }
            else{
                x[i] = n[i];
                if(c>0)
                {
                    y[c] = '0';
                    c++;
                }
            }
            i++;
            }
            x[i]='\0';
            y[c]='\0';
        printf("Case #%d: %s %s\n",i+1,x,y);
    }
}