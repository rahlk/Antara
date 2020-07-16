#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for(int x=1;x<=test;x++)
    {
        int n;
        scanf("%d",&n);
        char a[2 * n];
        scanf("%s",a);
        printf("Case #%d: ",x);
        for(int i=0;i<2*n-2;i++)
        {
            if(a[i] == 'E') printf("S");
            else printf("E");
        }
        printf("\n");
    }
}