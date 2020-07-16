#include<stdio.h>
int contain_four(int temp){
	int result = 0;
	while(temp > 0){
		
		int rem = temp % 10;
		if(rem == 4)
			{
				result = 1;
				break;	
			}
		temp /= 10;
	}
	
	return result;
}
int main(){
    
    int T;
    scanf("%d",&T);
    for(int i = 0; i < T; i++){
        
        int N,a,b;
        scanf("%d",&N);
        for(int j = 1; j < N; j++)
		{
			if(!contain_four(j))
				if(!contain_four(N - j))
				{
					printf("Case #%d: %d %d",i+1,j,N-j);
					break;
				}
		}
		
		
        
    }
    return 0;
}