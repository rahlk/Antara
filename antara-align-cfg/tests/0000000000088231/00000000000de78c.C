#include<stdio.h>
int checkfour(int x)
{
    int temp=x,rem=0;
    while(temp!=0 && rem!=4)
    {
        rem=temp%10;
        if(rem==4)
        {
        	return 0;
		}
        temp=temp/10;
    }
    if(temp==0)
    {
        return 1;
    }
}
void main()
{
    int T,i,j,num;
    scanf("%d",&T);
    int ans[T][2];
    for(i=0;i<T;i++)
    {
        scanf("%d",&num);
        for(j=1;j<=num;j++)
        {
            if(checkfour(j) && checkfour(num-j))
            {
                ans[i][0]=j;
                ans[i][1]=num-j;
                break;
            }
        }
    }
    for(i=0;i<T;i++)
    {
        printf("Case #%d: %d %d\n",i+1,ans[i][0],ans[i][1]);
    }
}