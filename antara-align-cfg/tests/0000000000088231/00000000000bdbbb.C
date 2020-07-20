#include<stdio.h>
#include<string.h>

void itoa(int num, char str[]);
int main()
{
    int i,j,T,N,a,b,c,d,k,l=0,A,B;
    char str1[1000000], str2[1000000];
    scanf("%d", &T);

    for(i=0;i<T;i++){
        if(T>100||T<1)break;
        scanf("%d", &N);
        itoa(N,str1);
        c=strlen(str1);
        for(j=0;j<c;j++){
            if(str1[j]=='4')
            {
                l=1;
                break;
            }
        }
        if(l!=1)break;
        if(N>=10000||N<=1)break;
        for(a=N/2,b=N/2;a>=1,b<N;a--,b++){
            itoa(a,str1);
            itoa(b,str2);
            c=strlen(str1);
            d=strlen(str2);
            k=0;
            l=0;
            for(j=0;j<c;j++){
                if(str1[j]=='4'){
                    k=1;
                    break;
                }
            }
            for(j=0;j<d;j++){
                if(str2[j]=='4'){
                    l=1;
                    break;
                }
            }
            if(k==0&&l==0){
                A=a;
                B=b;
                break;
            }
        }
        printf("Case #%d: %d %d\n", i+1,A,B);
    }
    return 0;
}
void itoa(int num, char str[])
{
    int i,r,len=0,n;
    n=num;
    while(n!=0){
        len++;
        n/=10;
    }
    for(i=0;i<len;i++){
        r=num%10;
        num=num/10;
        str[len - (i+1)]=r+'0';
    }
    str[len]='\0';
}

