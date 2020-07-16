#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,m,n,a,b,c,d,k,l,x,y;
    char str1[1000000], str2[1000000];
    scanf("%d", &m);

    for(i=0;i<m;i++){
        scanf("%d", &n);
        for(a=n/2,b=n/2;a>=1,b<n;a--,b++){
            itoa(a,str1,10);
            itoa(b,str2,10);
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
                x=a;
                y=b;
                break;
            }
        }
        printf("Case #%d: %d %d\n", i+1,x,y);
    }
    return 0;
}

