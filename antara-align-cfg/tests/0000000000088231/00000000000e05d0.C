#include <stdio.h>
int find_a(int n)
{
    int result = 0; int mult = 1;
    while(n!=0){
        if (n%10==4){
            result = result + 3*mult;
        }
        else{
            result = result + (n%10)*mult;
        }

     n=n/10;    mult=mult*10;
    }
return result;
}
int find_b(int n)
{
    int result = 0; int mult = 1;
    while(n!=0){
        if(n%10==4) result=result+mult;
        n=n/10; mult = mult*10;
    }
    return result;
}

int main()
{   int num;
    int no_cases;
    int i=1;
    scanf("%d",&no_cases);
    while((no_cases)>=i){
        scanf("%d",&num);
        int a=find_a(num);
        int b=find_b(num);
        printf("Case #%d: ",i);
        printf("%d %d\n",a,b);
        i++;
    }
    return 0;
}