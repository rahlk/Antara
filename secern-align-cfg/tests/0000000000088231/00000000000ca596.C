#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int n; // data type change
    int split1, split2;
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(int j=n-1;j>0;j--){
        	split1 = j;
        	split2 = n-j;
		}
        if(split1!=0 && split1 !=n && split2!=0 && split2!=n)
        printf("Case #%d: %d %d", i, split1, split2);
    }
    return 0;
}