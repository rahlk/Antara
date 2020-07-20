#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    int l=1;
    while(l<=t){
        int n;
        scanf("%d",&n);
        char a[n][1000];
        for(int i=0;i<n;i++){
            scanf("%s",a[i]);
        }
        char e,f,g;
        e='0';
        f='0';
        g='0';
        char string[1000];
        int c=0;
        int k=0;
        for(int j=0;J<500;j++){
            e='0';
            f='0';
            g='0';
            for(int i=0;i<n;i++){
                if(a[i][j]=='\0'){
                    char b[1000];
                    strcpy(b,a[i]);
                    strcat(a[i], b);
                }
                if(a[i][j]=='R'){
                    e='r';
                }
                if(a[i][j]=='S'){
                    f='s';
                }
                if(a[i][j]=='P'){
                    g='p';
                }
            }
            if(e=='0' && f=='0' && g=='p'){
                string[c]='S';
                c++;
                break;
            }
            if(e=='0' && f=='s' && g=='p'){
                string[c]='S';
                c++;
            }
            if(e=='r' && f=='s' && g=='p'){
                k=1;
                break;
            }
            if(e=='0' && f=='s' && g=='0'){
                string[c]='R';
                c++;
                break;
            }
            if(e=='r' && f=='s' && g=='0'){
                string[c]='R';
                c++;
            }
            if(e=='r' && f=='0' && g=='0'){
                string[c]='P';
                c++;
                break;
            }
            if(e=='r' && f=='0' && g=='p'){
                string[c]='P';
                c++;
            }
        }
        string[c]='\0';
        if(k==1){
            printf("Case #%d: IMPOSSIBLE\n",l);
        }
        else{
            printf("Case #%d: %s\n",l,string);
        }
        l++;
    }
}