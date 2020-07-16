#include <stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    int n; // data type change
    int split1[t], split2[t], dup1, dup2;
    char str1[100], str2[100], num[200];
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        sprintf(num, "%d", n);
        int k = 1;
        int j=0;
            while(1){
            	split1[i-1]=n-k;
            	split2[i-1]=n-split1[i-1];
            	sprintf(str1, "%d", split1[i-1]);
            	sprintf(str2, "%d", split2[i-1]);
            	if(str1[j]=='4' || str2[j]=='4'){
            		k++;
				}else{
					if(j<strlen(num))
					j++;
					else
					break;
				}
			}
	if(split1[i-1]!=0 && split1[i-1] !=n && split2[i-1]!=0 && split2[i-1]!=n)
        printf("Case #%d: %d %d\n", i, split1[i-1], split2[i-1]);
    }
    return 0;
}