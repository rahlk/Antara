#include<stdio.h>
#include<math.h>
void main()
{
    int T,N,i,num,count=0, rem=0,a,b
    
    Scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
            printf("\n");
            scanf("%d",&N);
            printf("\t");
            findab(N,&a,&b);
            printf("Case #%d:x%d %d",i,a,b);
            
    }
}
int findab(int N,in *a,int *b){
    *a=N%2;
    *b=N-a;
    checkfour(*a,*b);
    return(*a,*b);
    
}




int checkfour(int x,int y){
    num=N;
    while(num>0)
    {
        rem=num%10;
        if(rem==4)
        count++;
        
    }
    if(count==0)
    return (x,y)  ;
    else
    {
        x-=x;
        y+=y;
        checkfour(x,y);
    }
    
    
}
