#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

bool check_prime(unsigned int num)
{
    unsigned int i;

    for (i = 2; (i*i) <= num; i++) {
        if ((num % i) == 0) {
            return false;
        }
    }

    return true;
}

int comparator(const void *a, const void *b) {
    return (*(unsigned int *)a) - (*(unsigned int *)b);
}

void find_string(unsigned int *arr, unsigned int L, unsigned int N,
        char *str, unsigned int *map, unsigned int min_idx)
{
    int i, j, k, map_idx, a_idx  = 0;
    unsigned int p, alpha_map[26], prev;
    unsigned int *map_copy = (unsigned int *) malloc(sizeof(unsigned int) * (L+1));

    for (p = 2; p <= N; p++) {
        if (!check_prime(p)) {
            continue;
        }
        if (!(arr[min_idx] % p)) {
            //found the first prime
            break;
        }
    }

    map[0] = p;
    map[1] = arr[min_idx]/p;
    map_idx = 2;

    for (i = min_idx-1, j = min_idx+1; i >= 0 || j < L ; i--, j++) {
        int count = 0;

        if (i >= 0) {
            if (!(arr[i] % map[map_idx-1])) {
                map[map_idx] = arr[i]/map[map_idx-1];
            } else {
                map[map_idx] = arr[i]/map[map_idx-2];
            }
            count++;
        }

        if (j < L) {
            if (!(arr[j] % map[map_idx-1])) {
                map[map_idx+count] = arr[j]/map[map_idx-1];
            } else {
                map[map_idx+count] = arr[j]/map[map_idx-2];
            }
            count++;
        }
        
        map_idx += count;
    }

    qsort(map, L+1, sizeof(unsigned int), comparator);

    prev = map[0];
    for (i = 1; i < map_idx; i++) {
        if (map[i] != prev) {
            alpha_map[a_idx] = prev;
            prev = map[i];
            a_idx++;
        }
    }

    alpha_map[a_idx] = prev;

    for (i = 0; i < 26; i++) {
        if (!(arr[0] % alpha_map[i]) &&
            !(arr[1] % alpha_map[i])) {
            map_copy[0] = arr[0]/alpha_map[i];
            break;
        }
    }

    for (i = 0, j = 1; i < L; i++, j++) {
        if (!(arr[i] % map_copy[j-1])) {
            map_copy[j] = arr[i]/map_copy[j-1];
        } else {
            for (k = 0; k < 26; k++) {
                if (!(arr[i] % alpha_map[k])) {
                    map_copy[j] = arr[i]/alpha_map[k];
                    break;
                }
            }
        }
    }

    for (i = 0; i < map_idx; i++) {
         for (j = 0; j < 26; j++) {
            if (map_copy[i] == alpha_map[j]) {
                str[i] = 'A' + j;
                break;
            }
         }
    }

    free(map_copy);

    return;
}

int main() {
    int i, j, T;

    scanf("%d", &T);

    for (i = 1; i <= T; i++) {
        unsigned int N, L, min = INT_MAX, min_idx;

        scanf("%d %d", &N, &L);

        unsigned int *arr = (unsigned int *) malloc(sizeof(unsigned int) * L);
        unsigned int *map = (unsigned int *) malloc(sizeof(unsigned int) * (L+1));
        char *str = (char *)malloc(sizeof(char) * (L+2));

        for (j = 0; j < L; j++) {
            scanf("%d", &arr[j]);
            if (min > arr[j]) {
                min = arr[j];
                min_idx = j;
            }
        }

        find_string(arr, L, N, str, map, min_idx);

        str[L+1] = '\0';

        printf("Case #%d: %s\n", i, str);

        free(arr);
        free(str);
        free(map);
    }

    return 0;
}