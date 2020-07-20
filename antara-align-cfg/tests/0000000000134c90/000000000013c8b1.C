#include<stdio.h>
#include<string.h>
int main(){
    int t,t1,n;
    scanf("%d",&t);
    t1=t;
    while(t--){
        int signal=0;
        scanf("%d",&n);
        char arr[n][500];
        for(int i=0;i<n;i++){
            scanf("%s",arr[i]);
        }
        int a1=0,a2=0,a3=0;
        char str[strlen(arr[0])];
        for(int i=0;i<strlen(arr[0]);i++){
            a1=a2=a3=0;
            for(int j=0;j<n;j++){
                
                if(arr[j][i]=='R')
                a1=1;
                else if(arr[j][i]=='S')
                a2=1;
                else if(arr[j][i]=='P')
                a3=1;
                if(a1 && a2 && a3)
                signal=1;
                
                }
                if(a2==0)
                    str[i]='P';
                    else if(a1==0)
                    str[i]='S';
                    else if(a3==0)
                    str[i]='R';
                
            }
        
        if(signal){
            printf("Case #%d: IMPOSSIBLE\n",t1-t);
        }
        else
        printf("Case #%d: %s\n",t1-t,str);
    }
    return 0;
}