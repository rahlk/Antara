#import<stdio.h>
#import<stdint.h>
#import<stdlib.h>
#import<string.h>
#import<assert.h>

uint32_t gcd(uint32_t a, uint32_t b)
{
	if (b > a)
	{
		return gcd(b, a);
	}
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

int compint(const void* left, const void* right)
{
	int32_t a = *((const uint32_t*)left);
	int32_t b = *((const uint32_t*)right);

	return (a > b) - (a < b);
}

ssize_t search(uint32_t* list, uint32_t len, uint32_t val)
{
	for (int i = 0; i < len; ++i)
	{
		if (list[i] == val) {
			return i;
		}
	}
	return -1;	// Should never happen
}

char* primerize(uint32_t len, uint32_t* input_integers)
{
	// Compute all the primes representing a string in a char
	uint32_t* primes = (uint32_t*) malloc((len+1) * sizeof(uint32_t));
	
	uint32_t* sorted_primes = (uint32_t*) malloc((len+1) * sizeof(uint32_t));
	uint32_t* prime_lookup = (uint32_t*) malloc(26 * sizeof(uint32_t));

	char* output_string = (char*) malloc((len + 1) * sizeof(char));

	for (int i = 0; i < len - 1; ++i)
	{
		uint32_t second_char = gcd(input_integers[i], input_integers[i+1]);
		uint32_t first_char = input_integers[i] / second_char;

		primes[i] = first_char;
		primes[i+1] = second_char;

		sorted_primes[i] = first_char;
		sorted_primes[i+1] = second_char;

		if (i == len - 2)
		{
			uint32_t last_char = input_integers[i+1] / second_char;
			primes[len] = last_char;
			sorted_primes[len] = last_char;
		}
	}
	// How to find the last prime factor?


	// Sort primes
	// (This is all less efficient than making a hashmap, but I don't wanna build one)
	qsort(sorted_primes, len +1, sizeof(uint32_t), compint);

	// Remove duplicates
	uint32_t lookup_index = 0;
	for (int i = 0; i < len+1; ++i)
	{
		if (i > 0 && sorted_primes[i] != sorted_primes[i-1])
		{
			lookup_index++;
		}
		prime_lookup[lookup_index] = sorted_primes[i];
	}


	for (int i = 0; i < len; ++i)
	{
		ssize_t index = search(prime_lookup, 26, primes[i]);
		assert(index >= 0);
		output_string[i] = 65 + index;
	}
	output_string[len] = '\0';

	// Return output array
	free(primes);
	free(sorted_primes);
	return output_string;
}

int main(int argc, char** argv)
{
	int t;
	scanf("%d", &t);

	for (int i = 1; i <= t; ++i)
	{
		// Fetch string length
		uint32_t max_prime_value, num_characters;
		scanf("%d %d", &max_prime_value, &num_characters);

		// Allocate enough memory for all the integers and collect
		uint32_t* input_integers = malloc(sizeof(uint32_t) * num_characters);
		for (int i = 0; i < num_characters; ++i)
		{
			scanf("%d", &(input_integers[i]));
		}

		// Solve problem & output result
		char* output_string = primerize(num_characters, input_integers);
		printf("Case #%d: %s\n", i, output_string);

		free(input_integers);
	}
	return 1;
}