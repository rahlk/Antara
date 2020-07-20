#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    int x;
    for(x = 0; x < t; x++){
        int n;
        scanf("%d", &n);
        
        int l;
        scanf("%d", &l);
        
        int num;
        scanf("%d", &num);
        
        int i, codes[l+1];
        for(i = 2; i < n; i++){
            if(num % i == 0){
                codes[0] = i;
                codes[1] = num/ i;
                break;
            }
        }
        
        int flag = 1, temp, k = 2;
        for(i = 0; i < l-1; i++){
            scanf("%d", &num);
            if(flag){
                if(num % codes[0] == 0){
                    // Swapping two numbers with the help of the third variable.
                    temp = codes[0];
                    codes[0] = codes[1];
                    codes[1] = temp;
                    
                    codes[k] = num / codes[k-2];
                    k++;
                    flag = 0;
                    continue;
                }
            }
            codes[k] = num/ codes[k-1];
            k++;
        }
    	
    	// Duplicating the array.
        int dup[l+1];
        for(i = 0; i < l+1; i++){
            dup[i] = codes[i];
        }
        
        // Sorting the duplicate array with bubble-sort.
    	for(i = 0; i < l; i++){
    	    for(k = 0; k < l-i; k++){
    	        if(dup[k] > dup[k+1]){
    	            dup[k]   = dup[k] + dup[k+1];
    	            dup[k+1] = dup[k] - dup[k+1];
    	            dup[k]   = dup[k] - dup[k+1];
    	        }
    	    }
    	}
    	
    	// Removing duplicate elements from the array.
        int alpha[26], count = 0;
        for(i = 0; i < l+1; i++){
            if(dup[i] == dup[i+1])
                continue;
            alpha[count] = dup[i];
            count++;
        }
        
        printf("%s%d%s", "Case #", (x+1), ": ");
        for(i = 0; i < l+1; i++){
            for(k = 0; k < 26; k++){
                if(codes[i] == alpha[k]){
                    printf("%c", ('A' + k));
                    break;
                }
            }
        }
        printf("%s", "\n"); 
    }
    return 0;
}
