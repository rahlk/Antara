#include<stdio.h>
#include<string.h>
int t;
char a[50000],c[50000];
int main(){
    scanf("%d",&t);
    while(t--){
    int n=0,i=0,flag=0;
    scanf("%d",&n);
    fgets(a,10000,stdin);
    i=0;
    int length=2*n-2;
    if(a[i]=='S')
        c[i]='E';
    else{
        flag=1;
        c[i]='S';
    }
    i++;
    while(i<length){
        if(flag==0 ){
            if(a[i]=='S'){
                c[i]='E';
            }
            else{
                c[i]='S';
                flag=1;
            }
        }
        else if(flag==1){
            if(a[i]=='E'){
                c[i]='S';
            }
            else{
                c[i]='E';
                flag=0;
            }
        }
        i++;
    }
    c[i]='\0';
    i=0;
    while(c[i]!='\0'){
        printf("%c",c[i]);
        i++;
    }
    printf("\n");
    }
}