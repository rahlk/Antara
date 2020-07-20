#include<stdio.h>
#include<string.h>


int main()
{
    int t,i,j,a,b;
    char  f;
    scanf("%d", &t);
    //printf("%d", t);
    scanf("%c", &f);
    for(i = 1;i<=t;i++)
    {
        char n[100000], x[100000], y[100000];
        gets(n);
        //printf("%s\n",n);
        int l=strlen(n);
        //printf("%d\n", l);
        for(j=0; j<l; j++){
            if(n[j]=='4'){
                x[j]='3';
                y[j]='1';
            }
            else{
                x[j]=n[j];
                y[j]='0';
            }
        }
        printf("Case #%d: ",i);
        for(j=0; j<l; j++){
            printf("%c", x[j]);
        }
        int flag=0;
        printf(" ");
        for(j=0; j<l; j++){
            if(y[j]=='0' && flag==0)
                continue;
            printf("%c", y[j]);
            flag=1;
        }
        printf("\n");
    }
    return 0;
}
