/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<math.h>
void func(int n){
    int i=0,f=0,rem,temp;
    temp=n;
    while(n>0){
        rem=n%10;
        
        if(rem==9||rem==8||rem==6||rem==5||rem==4)
        {
            f+=(rem-3)*(pow(10,i));
            i++;
           
        }
        else if(rem==7){
            f+=(rem-2)*pow(10,i);
            i++;
            
        }
        else{
            f+=rem*pow(10,i);
            i++;
            
        }
        n=n/10;    
        
    }
    printf("%d %d",f,temp-f);
}
int main(){
    int c,i,t,n,temp;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        printf("Case #%d: ",i+1);
        func(n);
        
    }
    return 0;
}
