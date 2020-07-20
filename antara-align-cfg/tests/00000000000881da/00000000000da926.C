#include<stdio.h>
#include<string.h>
int main(){
     int t,n;
     char s[10000];
     scanf("%d\n",&t);

    for(int j=1;j<=t;j++){
         scanf("%d\n",&n);
         int x=1,y=1;

        scanf("%s",s);
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='E'){
                x=x+1;
                s[i]='S';
                }
                else if(s[i]=='S'){
                    y=y+1;
                    s[i]='E';
                    }

                    }
                    printf("Case #%d :%s\n",j,s);
}
return 0;
}

