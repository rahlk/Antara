#include<stdio.h>
int f2(int n){
    int i=0;
    while(n>0)
    {
        i*=10;
        i+=1;
        n/=10;
    }
    return i;
}
int f(int n){
    int x,y=1;
    while(n>0 && y==1){
        x=n%10;
        if(x==4)
            y=0;
        n/=10;
    }
    return y;
}
void func(int i,int x)
{
    int a,b,y=1,t;
    if(!f(x))
        {
            a=b=x/2;
            if(x%2==1)
                a++;
            while(y==1)
            {
                if(f(a) && f(b)){
                    printf("Case #%d: %d %d\n",i+1,a,b);
                    y=0;
                }
                else{
                    t=f2(a);
                    a+=t;
                    b-=t;
                }
            }
        }
}
int main()
{
    int n,i,x;
    int *ar;
    scanf("%d",&n);
    ar=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        ar[i]=x;
    }
    for(i=0;i<n;i++)
            func(i,ar[i]);
    return 0;
}