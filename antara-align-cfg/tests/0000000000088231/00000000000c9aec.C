#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int n; // data type change
    int split1, split2;
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(int j=n-1;j>0;j--){
        	int dup = j;
            while(j>0){
             int d=j%10;
             if(d==4){
                 split1=0;
                break;
             }
             split1=dup;
             j=j/10;
             
            }
           split2 = n-split1;
           while(split2>0){
               int d=split2%10;
               if(d==4 || split2==n){
               	split2=0;
                   break;
               }
           }
        
        }
        if(split1!=0 && split1 !=n && split2!=0 && split2!=n)
        printf("Case #%d: %d %d", i, split1, split2);
    }
    return 0;
}