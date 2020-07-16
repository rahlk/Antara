#include<stdio.h>
#include<string.h>

int main(){
    int i,t,n,j;
    char s[100],list[100][1001];
    scanf("%d", &t);
    for (i = 0; i < t; i++){
        scanf("%d",&n);
        scanf("%s",s);
        s[strlen(s)] = '\0';
        for (j=0;j<strlen(s);j++){
            if (s[j]=='E') s[j] = 'S';
            else if(s[j]=='S') s[j]= 'E';
        }
        strcpy(list[i],s);
    }
    for (i=0;i<t;i++){
        printf("Case #%d: %s\n",i+1,list[i]);
    }
}