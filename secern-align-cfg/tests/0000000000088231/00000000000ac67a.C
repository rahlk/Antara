#include<stdio.h>

int main(){
    int i,j=1,k,l,m,n,t,flag;
    scanf("%d",&t);
    while(j<=t){
        char s1[101],s2[101];
        flag = k = m = n = 0;
        scanf("%s",&s1);
        l = length(s1);
        for(i =0;i<l;i++){
            if(s1[i]=='4'){
                s1[i] = '2';
                s2[k++] = '2';
                flag = flag == 0?1:flag;
            }else{
                if(flag == 1){
                    s2[k++] = '0';
                }
            }

        }
        printf("Case #%d: ",j++);
        while(l--)printf("%c",s1[m++]);
        printf(" ");
        while(k--)printf("%c",s2[n++]);
        printf("\n");
    }
}

int length(char *s){
    int i=0;
    while(s[i++]!='\0');
    return i-1;
}

