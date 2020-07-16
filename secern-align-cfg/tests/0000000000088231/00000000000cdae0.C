#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d",&t);
    
    char num[1000000000];
    for(int i = 0;i<t;i++) {
        scanf("%s", num);
        
        int len = strlen(num);
        
        char ans[1000000000];
        
        int shouldWrite = 0;
        
        int k=0;
        for(int j=0;j<len;j++) {
            if(num[j] == '4']) {
                num[j] = '3';
                ans[k++] = '1';
            } else if(k>0) {
                ans[k++] = '0';
            }
        }
        
        if(k==0) {
            ans[k++] = '0';
        }
        
        ans[k] = 0;
        
        printf("Case #%d: %s %s\n", t+1, num, ans)
    }
}