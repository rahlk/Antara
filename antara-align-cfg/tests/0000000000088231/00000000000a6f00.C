#include<stdio.h>
int checkfour(int);
void main()
{
    int T, N[100];
    long long int a1=0, b1=0;
    //long long int a[100000], b[100000];
    scanf("%d", &T);
    for(int i=0; i<T; i++)
    {
        scanf("%d", &N[i]);
    }
    for(int i=0; i<T; i++)
    {

        while(a1<=N[i])
        {
            b1=N[i]-a1;
        }
        if((checkfour(a1) && checkfour(b1))== 1)
        {
            printf("Case #%d:\t%d\t%d\n", i+1, a1, b1);
            break;

        }
        else
            a1++;
    }

}
int checkfour(int x)
{
    long long int a[100000];


    for(int j=0; x>0; j++)
    {
        a[j]=x%10;
        x=x/10;
        if(a[j]==4)
        {
            return 0;
            break;

        }
        else
            return 1;
    }
}
