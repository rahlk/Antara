#include<stdio.h>
int main()
{
    int i,T;
    scanf("%d",&T);
    int N[T],l1,l2;
    for(i=0;i<T;i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=0;i<T;i++){
        if(N[i]%2==0){
            l1=N[i]/2;
            l2=N[i]/2;
        }
        else{
            l1=(N[i]+1)/2;
            l2=(N[i]-1)/2;
        }
        printf("Case #%d: %d %d \n",(i+1),l1,l2);
    }
    return 0;
}