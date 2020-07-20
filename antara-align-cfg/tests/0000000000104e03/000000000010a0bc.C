#include <stdio.h>
#include <stdbool.h>

void move(int r, int c, bool inverted) {
    if (inverted) {
        printf("%d %d\n", c, r);
    } else {
        printf("%d %d\n", r, c);
    }
}

int main() {
    int T;
    
    scanf(" %d", &T);
    
    int Q;
    
    for (Q = 1; Q <= T; Q++) {
        int R;
        int C;
        
        scanf(" %d %d", &R, &C);
        
        bool v = false;
        
        if (R > C) {
            int t = R;
            R = C;
            C = t;
            v = true;
        }
    
        if (R == 2 && C < 5 || R == 3 && C == 3) {
            printf("Case #%d: IMPOSSIBLE\n", Q);
        } else if (R == 2 && C == 5) {
            printf("Case #%d: POSSIBLE\n", Q)
            move(2, 3, v);
            move(1, 1, v);
            move(2, 4, v);
            move(1, 2, v);
            move(2, 5, v);
            move(1, 3, v);
            move(2, 1, v);
            move(1, 5, v);
            move(2, 2, v);
            move(1, 4, v);
        } else if (R == 3 && C == 4) {
            printf("Case #%d: POSSIBLE\n", Q);
            move(2, 3, v);
            move(1, 1, v);
            move(3, 2, v);
            move(1, 3, v);
            move(3, 4, v);
            move(2, 2, v);
            move(1, 4, v);
            move(2, 1, v);
            move(3, 3, v);
            move(1, 2, v);
            move(2, 4, v);
            move(3, 1, v);
        } else if (R == 3 && C == 5) {
            printf("Case #%d: POSSIBLE\n", Q);
            move(1, 5, v);
            move(2, 3, v);
            move(1, 1, v);
            move(2, 5, v);
            move(3, 2, v);
            move(1, 3, v);
            move(3, 4, v);
            move(2, 2, v);
            move(3, 5, v);
            move(1, 4, v);
            move(2, 1, v);
            move(3, 3, v);
            move(1, 2, v);
            move(2, 4, v);
            move(3, 1, v);
        } else if (R == 4 && C == 4) {
            printf("Case #%d: POSSIBLE\n", Q);
            move(4, 4, v);
            move(2, 3, v);
            move(1, 1, v);
            move(3, 2, v);
            move(1, 3, v);
            move(4, 2, v);
            move(3, 4, v);
            move(2, 2, v);
            move(4, 3, v);
            move(1, 4, v);
            move(2, 1, v);
            move(3, 3, v);
            move(1, 2, v);
            move(4, 1, v);
            move(2, 4, v);
            move(3, 1, v);
        } else if (R == 4 && C == 5) {
            printf("Case #%d: POSSIBLE\n", Q);
            move(4, 4, v);
            move(1, 5, v);
            move(2, 3, v);
            move(3, 5, v);
            move(1, 1, v);
            move(4, 5, v);
            move(3, 2, v);
            move(1, 3, v);
            move(2, 5, v);
            move(4, 2, v);
            move(3, 4, v);
            move(2, 2, v);
            move(4, 3, v);
            move(1, 4, v);
            move(2, 1, v);
            move(3, 3, v);
            move(1, 2, v);
            move(4, 1, v);
            move(2, 4, v);
            move(3, 1, v);
        } else if (R == 5 && C == 5) {
            printf("Case #%d: POSSIBLE\n", Q);
            move(4, 4, v);
            move(1, 5, v);
            move(2, 3, v);
            move(3, 5, v);
            move(1, 1, v);
            move(4, 5, v);
            move(3, 2, v);
            move(1, 3, v);
            move(2, 5, v);
            move(4, 2, v);
            move(5, 5, v);
            move(3, 4, v);
            move(5, 3, v);
            move(2, 2, v);
            move(5, 1, v);
            move(4, 3, v);
            move(1, 4, v);
            move(2, 1, v);
            move(3, 3, v);
            move(5, 4, v);
            move(1, 2, v);
            move(4, 1, v);
            move(2, 4, v);
            move(5, 2, v);
            move(3, 1, v);
        }
    }

}