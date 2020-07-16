#include<stdio.h>
int num(int);
void main()
{
    int A,B,N,r,m;
    clrscr();
    printf("enter lottery number");
    scanf("%d",&N);
    m=N;
    while(N!=0)
    {
        r=N%10;
        if (r==4)
        break;
        N/=10;
    } 
    if(N==0)
    printf("number do not contain 4");
    else 
        num(m);
    getch();
}
int num (int s)
{   int i,j,c,a,b,p;
    a=s/2;
    b=a;
    c=a;
    if (a+b==s)
        {   while(a!=0)
            {
                r=a%10;
                if (r==4)
                break;
                a/=10;
            }
        if (a==0)
            printf("case # 1 : %d%d",c,b);
       }
    for(i=0,j=s;i<s;i++,j--)
    {   a=i;
        b=j;
        if(i+j==s)
         { while(i!=0 || j!=0)
            r=i%10;
            p=j%10;
            if (r==4 || p==4)
            break;
            i/=10;
            j/=10;
         }   
            if(i==0&&j==0)
                printf("case #2 : %d%d",a,b);
                return 0;
    }        
}