#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

int max_shared_suffix(char *w1, char *w2) {
    int l1 = strlen(w1);
    int l2 = strlen(w2);
    
    int suffix = 0;
    
    while (suffix < l1 && suffix < l2) {
        if (w1[l1 - 1 - suffix] == w2[l2 - 1 - suffix]) {
            suffix++;
        } else {
          break;
        }
    }
    
    return suffix;
}

bool try4(char **words, int a0, int a1, int b0, int b1) {
    int a_max_suffix = max_shared_suffix(words[a0], words[a1]);
    
    if (!a_max_suffix) {
        return false;
    }
    
    int b_max_suffix = max_shared_suffix(words[b0], words[b1]);
    
    if (!b_max_suffix) {
        return false;
    }
    
    int a_suffix;
    int b_suffix;

    for (a_suffix = 1; a_suffix <= a_max_suffix; a_suffix++) {
        for (b_suffix = 1; b_suffix <= b_max_suffix; b_suffix++) {
            if (a_suffix == b_suffix) {
                if (max_shared_suffix(words[a0], words[b0]) >= a_suffix) {
                    continue;
                }
                if (max_shared_suffix(words[a0], words[b1]) >= a_suffix) {
                    continue;
                }
                if (max_shared_suffix(words[a1], words[b0]) >= a_suffix) {
                    continue;
                }
                if (max_shared_suffix(words[a1], words[b1]) >= a_suffix) {
                    continue;
                }
            }
            
            return true;
        }
    }
    
    return false;
}

bool try6(char **words, int a0, int a1, int b0, int b1, int c0, int c1) {
    int a_max_suffix = max_shared_suffix(words[a0], words[a1]);
    
    if (!a_max_suffix) {
        return false;
    }
    
    int b_max_suffix = max_shared_suffix(words[b0], words[b1]);
    
    if (!b_max_suffix) {
        return false;
    }
    
    int c_max_suffix = max_shared_suffix(words[c0], words[c1]);
    
    if (!c_max_suffix) {
        return false;
    }
    
    int a_suffix;
    int b_suffix;
    int c_suffix;
    
    for (a_suffix = 1; a_suffix <= a_max_suffix; a_suffix++) {
        for (b_suffix = 1; b_suffix <= b_max_suffix; b_suffix++) {
            for (c_suffix = 1; c_suffix <= c_max_suffix; c_suffix++) {
                if (a_suffix == b_suffix) {
                    if (max_shared_suffix(words[a0], words[b0]) >= a_suffix) {
                        continue;
                    }
                    if (max_shared_suffix(words[a0], words[b1]) >= a_suffix) {
                        continue;
                    }
                    if (max_shared_suffix(words[a1], words[b0]) >= a_suffix) {
                        continue;
                    }
                    if (max_shared_suffix(words[a1], words[b1]) >= a_suffix) {
                        continue;
                    }
                }
                
                if (a_suffix == c_suffix) {
                    if (max_shared_suffix(words[a0], words[c0]) >= a_suffix) {
                        continue;
                    }
                    if (max_shared_suffix(words[a0], words[c1]) >= a_suffix) {
                        continue;
                    }
                    if (max_shared_suffix(words[a1], words[c0]) >= a_suffix) {
                        continue;
                    }
                    if (max_shared_suffix(words[a1], words[c1]) >= a_suffix) {
                        continue;
                    }
                }
                
                if (b_suffix == c_suffix) {
                    if (max_shared_suffix(words[b0], words[c0]) >= b_suffix) {
                        continue;
                    }
                    if (max_shared_suffix(words[b0], words[c1]) >= b_suffix) {
                        continue;
                    }
                    if (max_shared_suffix(words[b1], words[c0]) >= b_suffix) {
                        continue;
                    }
                    if (max_shared_suffix(words[b1], words[c1]) >= b_suffix) {
                        continue;
                    }
                }
                
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    int T;
    
    scanf(" %d", &T);
    
    int Q;
    
    // Allocate enough for large case.
    
    char *buffer = malloc(sizeof(char[1010 * 53]));
    char **words = malloc(sizeof(char *[1010]));
    
    int i;
    
    for (i = 0; i < 1010; i++) {
        words[i] = &buffer[53 * i];
    }
    
    for (Q = 1; Q <= T; Q++) {
        int N;
        
        scanf(" %d", &N);
        
        for (i = 0; i < N; i++) {
            scanf(" %s", words[i]);
        }
        
        int best = 0;
        
        if (N == 6) {
            // Can we do six?
            
            // Map 0 to j
            
            int j;
            
            for (j = 1; j < N; j++) {
                int k = j == 1 ? 2 : 1;
                int l;
                
                // Map k to l
                
                for (l = 2; l < N; l++) {
                    if (l == k || l == j) {
                        continue;
                    }
                    
                    int m;
                    
                    for (m = 2; m < 6; m++) {
                        if (m == j || m == k || m == l) {
                            continue;
                        }
                        
                        break;
                    }
                    
                    int n;
                    
                    for (n = 2; n < 6; n++) {
                        if (n == j || n == k || n == l || n == m) {
                            continue;
                        }
                        
                        break;
                    }
                    
                    if (try6(words, 0, j, k, l, m, n)) {
                        best = 6;
                        goto tried6;
                    }
                }
            }
        }
        
        tried6:
        if (!best && N >= 4) {
            if (N == 6) {
                int t[4];
                
                int q;
                int r;
                
                for (q = 0; q < 6; q++) {
                    for (r = q + 1; r < 6; r++) {
                        // Populate t;
                        
                        int e;
                        int h = 0;
                    
                        for (e = 0; e < 6; e++) {
                            if (e != q && e != r) {
                                t[h++] = e;
                            }
                        }
                        
                        assert(h == 4);
                        
                        if (try4(words, t[0], t[1], t[2], t[3]) || try4(words, t[0], t[2], t[1], t[3]) || try4(words, t[0], t[3], t[1], t[2])) {
                            best = 4;
                            goto tried4;
                        }
                    }
                }
                
            
            } else if (N == 5) {
                if (try4(words, 0, 1, 2, 3) || try4(words, 0, 2, 1, 3) || try4(words, 0, 3, 1, 2)) {
                    best = 4;
                    goto tried4;
                }
                
                if (try4(words, 0, 1, 2, 4) || try4(words, 0, 2, 1, 4) || try4(words, 0, 4, 1, 2)) {
                    best = 4;
                    goto tried4;
                }
                
                if (try4(words, 0, 1, 4, 3) || try4(words, 0, 4, 1, 3) || try4(words, 0, 3, 1, 4)) {
                    best = 4;
                    goto tried4;
                }
                
                if (try4(words, 0, 4, 2, 3) || try4(words, 0, 2, 4, 3) || try4(words, 0, 3, 4, 2)) {
                    best = 4;
                    goto tried4;
                }
                
                if (try4(words, 4, 1, 2, 3) || try4(words, 4, 2, 1, 3) || try4(words, 4, 3, 1, 2)) {
                    best = 4;
                    goto tried4;
                }
            } else {
                int j;
            
                if (try4(words, 0, 1, 2, 3) || try4(words, 0, 2, 1, 3) || try4(words, 0, 3, 1, 2)) {
                    best = 4;
                    goto tried4;
                }
            }
        }
        
        tried4:
        if (!best && N >= 2) {
            // This is easy!
            
            int j;
            int k;
            
            for (j = 0; j < N; j++) {
                for (k = j + 1; k < N; k++) {
                    if (max_shared_suffix(words[j], words[k])) {
                        best = 2;
                        goto tried2;
                    }
                }
            }
        }
        
        tried2:
        printf("Case #%d: %d\n", Q, best);
    }
    
    return 0;
}