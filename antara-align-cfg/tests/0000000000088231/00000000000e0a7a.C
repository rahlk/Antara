#import<stdio.h>
#import<stdint.h>
#import<stdlib.h>
#import<string.h>

typedef struct Pair
{
	char* left;
	char* right;
} Pair;


Pair compute_integers(const char* input)
{
	// Allocate the same number of characters for the output
	char* left = malloc(strlen(input) + 1);
	char* right = malloc(strlen(input) + 1);
	for (int i = 0; i < strlen(input) + 1; ++i)
	{
		left[i] = '\0';
		right[i] = '\0';
	}

	ssize_t left_index = 0;
	ssize_t right_index = -1;

	for (int i = 0; i < strlen(input); ++i)
	{
		if (input[i] == '4')
		{
			if (right_index < 0) {
				right_index = 0;
			}

			left[left_index] = '2';
			right[right_index] = '2';

			left_index++;
			right_index++;
		} else 
		{
			left[left_index] = input[i];
			left_index++;

			if (right_index >= 0)
			{
				right[right_index] = '0';
				right_index++;
			}
		}
	}
	return (Pair) { .left = left, .right = right };
}


int main(int argc, char** argv)
{
	// Read number of test cases
	int t;
	scanf("%d", &t);
	char* input_string = malloc(101);
	for (int i = 1; i <= t; ++i)
	{
		// 101 is maximum length of the input line
		scanf("%s", input_string);

		Pair res = compute_integers(input_string);
		printf("Case #%d: %s %s\n", i, res.left, res.right);

		free(res.left);
		free(res.right);
	}
}

