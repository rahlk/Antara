#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char words[1001][53];
int lens[1001];
int used[1001];

int reverse(char* str) {
    int i;
    int l = strlen(str);
    for (i = 0; str[2*i] && str[2*i+1]; i++) {
        char tmp = str[i];
        str[i] = str[l-i-1];
        str[l-i-1] = tmp;
    }
    return l;
}

typedef struct trie {
    struct trie* children[26];
    int used;
} trie_t;

void trie_ins(trie_t* tr, const char* str) {
    if (!str[0]) {
        tr->used = 1;
        return;
    }
    trie_t** child = &tr->children[str[0]-'A'];
    if (!*child) {
        *child = calloc(1,sizeof(trie_t));
    }
    trie_ins(*child, str+1);
}

int trie_has(trie_t* tr, const char* str) {
    if (!tr) return 0;
    if (!str[0]) {
        return tr->used;
    }
    return trie_has(tr->children[str[0]-'A'],str+1);
}

void trie_free(trie_t* tr) {
    if (!tr) return;
    int i;
    for (i = 0; i < 26; i++) {
        trie_free(tr->children[i]);
    }
    free(tr);
}

void trie_destroy(trie_t* tr) {
    if (!tr) return;
    int i;
    for (i = 0; i < 26; i++) {
        trie_free(tr->children[i]);
    }
}

int main(void) {
	int T;
    scanf("%d",&T);
    int i;
    for (i = 0; i < T; i++) {
        memset(used,0,sizeof(used));
        memset(words,0,sizeof(words));
        int N;
        trie_t trie;
        memset(&trie, 0, sizeof(trie));

        scanf("%d",&N);
        int j;
        for (j = 0; j < N; j++) {
            scanf("%s",words[j]);
            lens[j] = reverse(words[j]);

        }
        int L, w1, w2, total = 0;

        for (L = 50; L >= 1; L--) {
            for (w1 = 0; w1 < N; w1++) {
                for (w2 = 0; w2 < w1; w2++) {
                    if (used[w1] || used[w2]) continue;
                    if (lens[w1] < L || lens[w2] < L) continue;
                    if (!strncmp(words[w1], words[w2], L)) {
                        char tmp = words[w1][L-1];
                        words[w1][L-1] = 0;
                        if (trie_has(&trie,words[w1])) {
                            words[w1][L-1] = tmp;
                            continue;
                        }

                        used[w1] = 1;
                        used[w2] = 1;
                        trie_ins(&trie, words[w1]);
                        total += 2;
                    }
                }
            }
        }
        trie_destroy(&trie);

        printf("Case #%d: ",i+1);
        printf("%d\n",total);


    }
	return 0;
}
