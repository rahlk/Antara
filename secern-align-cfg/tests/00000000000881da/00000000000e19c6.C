#import<stdio.h>
#import<stdint.h>
#import<stdlib.h>
#import<string.h>

int main(int argc, char** argv)
{
	// Since the grid is square
	// 	Simply "Transpose" the moves
	int t;
	scanf("%d", &t);

	for (int i = 1; i <= t; ++i)
	{
		int n;
		scanf("%d", &n);

		char* input_moves = malloc(2*n);
		char* output_moves = malloc(2*n);
		scanf("%s", input_moves);

		for (int j = 0; j < strlen(input_moves); ++j)
		{
			if (input_moves[j] == 'E') {
				output_moves[j] = 'S';
			} else {
				output_moves[j] = 'E';
			}
		}

		printf("Case #%d: %s\n", i, output_moves);

		free(input_moves);
		free(output_moves);
	}
}