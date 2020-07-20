#include <stdio.h>
#include <stdlib.h>
int search_digit(int n,int check_num){
    int temp=n;
    int d=0;
    while(temp>0){
        d=temp%10;
        if(check_num==d){
            return 1;
        }
        temp=temp/10;
    }
    return 0;
}
void  get_check(int number){
    int a=0;
    int b=0;
    int temp=number;
    int i=0;
    if(search_digit(number,4)){
        while(search_digit(number,4)){
            i++;
            a+=number/2;
            b+=number/2;
            if(search_digit(a,4)){
                number=a;
                a=0;
            }else
                if( search_digit(b,4)){
                    number=b;
                    b=0;
                }else{
                    number=0;
                }
        }
        if(a >number ){
            b+=(a/2);
            a =(a/2);
        }
        if(b<number){
            b+=(a/2);
            a =(a/2);
        }
        printf("amount 1:%d\n",a);
        printf("amount 2:%d\n",b);
    }
    else{
        printf("check :%d\n",number);
    }
}
int main(int arc,char* argv){
        int num=0;
        system("clear");
        printf("please enter amount:");
        scanf("%d",&num);
        get_check(num);
        return 0;
}