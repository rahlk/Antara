#include <stdio.h>

int isDigitPresent(int x) 
{ 
    while (x > 0) 
    { 
        if (x % 10 == 4) 
            break; 
  
        x = x / 10; 
    }
    return (x > 0); 
} 

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        int found = 0 , a = 1, b;
        scanf("%d",&b);
        b -= 1;
        do{
            if(!isDigitPresent(a) && !isDigitPresent(b)){
                found = 1;
            }else{
                a += 2;
                b -= 2;
            }
        }while(!(found == 1 || a == b));
        printf("Case #%d: %d %d\n",i,a,b);
    }
    return 0;
}