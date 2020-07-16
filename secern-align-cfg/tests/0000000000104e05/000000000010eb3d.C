#include <stdio.h>
#include<string.h>

int main() {
	int test,l,k,k1,length,length1,Case,count,count1,index,index1,ans;
	char alien[1000][1000];
	int i,j,m,n,flag,flag1;
	scanf("%d",&test);
	Case=1;
	while(Case<=test){
	    scanf("%d",&l);
	    for(i=0;i<l;i++)
	        scanf("%s",alien[i]);
	    ans = 0;
	    for(i=0;i<l-1;i++){
	        count = 0;
	        index = -1;
	        if(alien[i][0] == '1')
	            continue;
	        for(j=i+1;j<l;j++){
	            count1 = 0;
	            index1 = -1;
	            if(alien[j][0] == '1')
	                continue;
	            length = strlen(alien[i]);
	            k1 = strlen(alien[j]);
	            k1--;
	            flag1 = 0;
	            flag = 0;
	            //printf("i : %d %d \n",length,k1);
	            for(k=length-1;k>=0;k--){
	                	                if(k1 < 0)
	                    break;

	                for(m=0;m<k;m++){
	                    if(alien[i][m] == alien[i][k]){
	                        flag = 1;
	                        break;
	                    }
	                }
	                for(n=0;n<k1;n++){
	                    if(alien[j][n] == alien[j][k1]){
	                        flag1 = 1;
	                        break;
	                    }
	                }
	                if(flag == 1 && flag1 == 1)
	                    break;
	                 else if(alien[i][k] == alien[j][k1--]){
	                     count1++;
	                     index1 = j;
	                 }
	                 else 
	                    break;
	            }
	        if(count1 > count){
	            count = count1;
	            index = index1;
	            //printf("index : %d %d Count : %d\n",i,index,count);
	        }
	            
	        }
	        if(index != -1){
	            alien[index][0] = '1';
	        }
	        ans += count;
	    }
	    printf("Case #%d: %d\n",Case,ans);
	    Case++;
	}
	return 0;
}