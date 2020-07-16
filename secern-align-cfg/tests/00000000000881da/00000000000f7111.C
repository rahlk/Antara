#include <stdio.h>

int main(void) {
	unsigned int a = 0, b = 0, counter_down = 0, counter_right = 0, counter_overall = 0, counter_char = 0, case_counter = 0, count = 0, size;
	int arr[10][10];
	char par[20], out[20];
	
	scanf("%d", &count);
	
	for (int asdf = 0; asdf < count; asdf++) {
		scanf("%d", &size);
		
		if (size < 2) {
			//error
			return 0;
		} else {
			scanf("%s", par);
			a = 0;
			b = 0;
			counter_down = 0;
			counter_right = 0;
			counter_overall = 0;
			counter_char =0;

			for (int i = 0; i < sizeof(out)/sizeof(char); i++) {
				out[i] = 0;
			}

			for (int i = 0; i < 5; i++) {
				for (int a = 0; a < 5; a++) {
					arr[i][a] = 0;
				}
			}

			for (int i = 0; i < sizeof(par)/sizeof(char); i++) {
				if (par[i] == 'E') {
					b++;
					arr[a][b] = 1;
				} else if (par[i] == 'S') {
					a++;
					arr[a][b] = 1;
				}
			}
			arr[size-1][size-1] = 0;

			printf("Case #%d: %s\n", case_counter+1, out);
			case_counter++;
		}
	}	
	return 0;
}