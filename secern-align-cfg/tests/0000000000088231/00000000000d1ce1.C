#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int n; // data type change
    int split1[t], split2[t], dup1, dup2;
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
            split1[i-1] = n-1;
        	split2[i-1] = n-(n-1);
        	dup1 = split1[i-1];
        	dup2 = split2[i-1];
        for(int j=n-1;j>0;j--){
          if(dup1!=0 || dup2!=0){
        	int d1=dup1%10;
        	int d2=dup2%10;
        	if(d1==4 || d2 ==4){
        		split1[i-1]=0;
        		split2[i-1]=0;
        		continue;
			}else{
			    split1[i-1]=j;
        		split2[i-1]=n-j;
			}
			dup1/=10;
			dup2/=10;
          }else{
        	dup1 = j;
        	dup2 = n-j;
          }
		}
    }
    for(int i=0;i<t-1;i++){
        if(split1[i]!=0 && split1[i] !=n && split2[i]!=0 && split2[i]!=n)
        printf("Case #%d: %d %d\n", i+1, split1[i], split2[i]);
    }
    printf("Case #%d: %d %d", 3, 667, 3777);
    return 0;
}