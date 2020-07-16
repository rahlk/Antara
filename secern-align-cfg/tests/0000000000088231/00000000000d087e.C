#include<stdio.h>
int replaceDigit(int x, int d1, int d2)
{
    int result = 0, multiply = 1;

    while (x % 10 > 0) {

        // Take reminder of number starting from 
        // the unit place digit 
        int reminder = x % 10;

        // check whether it is equal to the digit  
        // to be replaced.if yes then replace 
        if (reminder == d1)
            result = result + d2 * multiply;

        else // else remain as such 
            result = result + reminder * multiply;

        // Update and move forward from unit place  
        // to hundred place and so on. 
        multiply *= 10;
        x = x / 10; // update the value 
    }
    return result;
}

int main()
{
	int T, N,x,y, temp;
	scanf("%d", &T);
	for(int i=1;i<=T;i++)
	{
		scanf("%d", &N);
		temp=N;
		x=replaceDigit(N, 4, 2);
		y=N-x;
	        printf("Case #%d: %d %d", i, x, y);

	}


}
