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
void Solution(){
    
    long int T;
    scanf("%ld",&T);
    for(long int i = 0; i < T; i++){
        
        long int N,a,b;
        scanf("%ld",&N);
        for(int j = 1; j < N; j++)
		{
			if(!contain_four(j))
				if(!contain_four(N - j))
				{
					printf("Case #%ld: %ld %ld\n",i+1,j,N-j);
					break;
				}
		}
		
		
        
    }
}