#include <stdio.h>

#include<string.h>
int main()
{
    char s[10000],t[100000];
    int n,a,b,i,k,j,no,nom,cc=0,ccc=0,l,l1,l2,kk,kkk,nom1,count;
    scanf("%d",&a);
    for(k=1;k<=a;k++)
    {
        scanf("%d",&nom);
        scanf("%s",s);
        no=strlen(s);
        nom1=(2*nom)-2;
        printf("Case #%d: ",k);
        b=nom1/2;
        for(i=0;i<b;i++){
            printf("%c",'S');
        }        
        for(i=b;i<nom1;i++){
            printf("%c",'E');
        }
        printf("\n");
    }
    return 0;
}