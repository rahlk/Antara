#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int n; // data type change
    int split1[500], split2[500];
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(int j=n-1;j>0;j--){
        	split1[i-1] = j;
        	split2[i-1] = n-j;
		}
        
    }
    for(int i=0;i<t;i++){
        if(split1[i]!=0 && split1[i] !=n && split2[i]!=0 && split2[i]!=n)
        printf("Case #%d: %d %d", i+1, split1[i], split2[i]);
    }
    return 0;
}