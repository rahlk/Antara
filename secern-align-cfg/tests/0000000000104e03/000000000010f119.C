#include<stdio.h>
int main()
{
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
    int m,n;
    scanf("%d %d",&m,&n);
    if(m==n)
    {
        printf("Case #%d: IMPOSSIBLE");
    }
    else 
    printf("Case #%d: POSSIBLE");
    }
}