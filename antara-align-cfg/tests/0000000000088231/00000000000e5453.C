#include<stdio.h>
#include<math.h>
int main(){
    int t,i,j;
    i=0;
    scanf("%d", &t);
    for(i=0;i<t;i++){
        int num;
        scanf("%d",&num);
        int num2=num;
        int temp,count=0;
        int sum=0;
        while(num >0){
            temp= num%10;
           // printf("%d bbb\n", temp);
            num= num/10;
           // printf("%d\n", num);
            count++;
            if(temp==4 && count >1){
                sum=sum+ pow(10,count-1);
                //printf("%d  nn\n", sum);
            }
            if(temp==4 && count==1){
                sum= sum+1;
               // printf("%d   mm\n", sum);
            }
            
        }
        int res1,res2;
        res1=sum;
        res2=num2-sum;
        printf("Case #%d: %d %d\n", i+1,res1,res2);
        
    }
}