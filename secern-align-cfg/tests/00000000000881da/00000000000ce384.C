#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int x=1;x<=test;x++)
    {
        int n;
        scanf("%d",&n);
        printf("Case %d: ",x);
        for(int i=0;i<2*n-2;i++)
        {
            char a;
            scanf("%c",&a);
            if(a == 'E') printf("S");
            else printf("E");
        }
        printf("\n");
    }
}