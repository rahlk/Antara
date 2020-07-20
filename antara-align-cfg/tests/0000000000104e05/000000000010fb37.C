#include <stdio.h>
#include <stdlib.h>

struct PrefixTree {
    struct PrefixTree* next[26];
    int count;
};
int children;
int sol;
void count_words(struct PrefixTree* now) {
    int old_sol = sol;
    for (int i = 0; i < 26; i++) {
        if (now->next[i] != NULL) {
            count_words(now->next[i]);
        }
    }
    printf("%c %d %d %d\n", i+'A', now->count, sol, old_sol);
    if(now->count >= sol - old_sol + 2) {
        sol += 2;
    }
}

int main() {
    int T;   
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N);
        struct PrefixTree* root = malloc(sizeof(struct PrefixTree));
        root->count = 0;
        while (N--) {
            char word[51];
            scanf("%s", word);
            int len;
            for (len = 0; word[len]; len++);
            struct PrefixTree* now = root;
            for (int i = len - 1; i >= 0; i--) {
                if (now->next[word[i]-'A'] == NULL) {
                    now->next[word[i]-'A'] = malloc(sizeof(struct PrefixTree));
                    now->next[word[i]-'A']->count = 0;
                }
                now = now->next[word[i]-'A'];
                now->count++;
            }
        }
        sol = 0;
        children = 0;
        count_words(root);
        printf("Case #%d: %d\n", t, sol);
    }
}