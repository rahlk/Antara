#include<stdio.h>
#include<math.h>
int HowManyDigit(int);
bool isDigitPresent(int,int);
int main(){
    int N,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&N);
        int digit=HowManyDigit(N);
        if(digit==1){
            int y=1;
            int x=N-y;
            printf("#%d : %d %d",i,x,y);
            }
            
        else if(digit==2){
            int y=12;
            int x=N-y;
            printf("#%d : %d %d",i,x,y);
        }
        else if(digit==3){
            int y=11;
            int x=N-y;
            while(isDigitPresent(x,4)){
                y=y+12;
                x=x-y;
            }
            printf("#%d : %d %d",i,x,y);
            
        }
        else{
          int y=11;
            int x=N-y;
            while(isDigitPresent(x,4)){
                y=y+12;
                x=x-y;
            }
            printf("#%d : %d %d",i,x,y);
            
        }
    }
}
int HowManyDigit(int a){
    int num=a;
    int size;
    while(num!=0){
        num=num/10;
        size++;
    }
    return size;
}
bool isDigitPresent(int x, int d) 
{ 
    // Breal loop if d is present as digit 
    while (x > 0) 
    { 
        if (x % 10 == d) 
            break; 
  
        x = x / 10; 
    } 
  
    // If loop broke 
    return (x > 0); 
} 
  