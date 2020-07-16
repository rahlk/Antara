#include<stdio.h>
#include<conio.h>
void main()
{
    int T,*a,i,j,p,x;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    scanf("%d",&a[i]);
    for(i=0;i<T;i++)
    {
        for(j=1;j<a[i];j++)
        {
            int flag1=0;
            p=j;
            while(p>0)
            {
              x=p%10;
              if(x==4)
              flag1=1;
              p/=10;
            }
            if(flag1==0)
            {
                int flag2=0;
                p=a[i]-j;
                while(p>0)
                {
                    x=p%10;
                    if(x==4)
                    flag2=1;
                    p/=10;
                }
                if(flag2==0)
                {
                printf("%d %d",j,a[i]-j);
                break;
                }
            }
        }
        printf("\n");
    }
    getch();
}
    