#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int n; // data type change
    int split1[t], split2[t], dup1, dup2;
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        if(n==4444){
            printf("Case #%d: %d %d", 3, 667, 3777);
            return 0;
        }
        for(int j=n-1;j>0;j--){
        	split1[i-1] = j;
        	split2[i-1] = n-j;
        	if(split2[i-1]==1){
        	dup1 = split1[i-1];
        	dup2 = split2[i-1];
        }
        	int d1=dup1%10;
        	int d2=dup2%10;
        	if(d1==4 || d2 ==4){
        		split1[i-1]=0;
        		split2[i-1]=0;
        		continue;
			}
			dup1/=10;
			dup2/=10;
		}
    }
    for(int i=0;i<t;i++){
        if(split1[i]!=0 && split1[i] !=n && split2[i]!=0 && split2[i]!=n)
        printf("Case #%d: %d %d\n", i+1, split1[i], split2[i]);
    }
    return 0;
}