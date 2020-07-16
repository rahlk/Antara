
#include<stdio.h>


int main()
{
	//code
	int t, p=1;
	scanf("%d", &t);
	while(p<=t){
	    int r, c;
	    scanf("%d", &r);
	    scanf("%d", &c);
	    
	    if((r >= 5 && c % 2 == 0) || (c >= 5 && r % 2 == 0)){
	       printf("Case #%d: POSSIBLE\n", p); 
	    }else{
	        printf("Case #%d: IMPOSSIBLE\n", p);
	    }
	    
	    if(c >= 5 && r%2 == 0){
	        int col = 2, row = 1;
	        
	        int start = (c %2 == 0)? c/2 : c/2 + 1;
	        int i, j;
	        while(row <= r){
	            j = start;
	            i=1;
	            
	            while(j<=c){
	                printf("%d %d\n", col,j);
	                printf("%d %d\n", row,i);
	                i++; 
	                j++;
	            }
	            
	            j = 1;
	            
	            while(j<start){
	                printf("%d %d\n", col,j);
	                printf("%d %d\n", row,i);
	                j++;
	                i++;
	            }
	            
	            col = col+ 2;
	            row = row +2;
	        }
	    }else if(r >= 5 && c % 2 == 0){
	        
	        int col = 1, row = 2;
	        
	        int start = (r %2 == 0)? r/2 : r/2 + 1;
	        int i, j;
	        while(col <= c){
	            j = start;
	            i=1;
	            
	            while(j<=r){
	                printf("%d %d\n", j,col);
	                printf("%d %d\n", i,row);
	                i++; 
	                j++;
	            }
	            
	            j = 1;
	            
	            while(j<start){
	                printf("%d %d\n", j,col);
	                printf("%d %d\n", i,row);
	                j++;
	                i++;
	            }
	            
	            col = col+ 2;
	            row = row +2;
	        }
	        
	    }


	    p++;
	}

	return 0;
}