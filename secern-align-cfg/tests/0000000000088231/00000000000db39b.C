#include<stdio.h>
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
    int a,b,y=1;
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
                    a++;
                    b--;
                }
            }
        }
}
int main()
{
    int n,i,x,y=1,a,b;
    int *ar,*br;
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