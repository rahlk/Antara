#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int gcd(int m, int n) {
    while(n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int cmp(const void* a, const void* b) {
    const int* va = (const int*) a;
    const int* vb = (const int*) b;
    return *va - *vb;
}

int main(int argc, char* argv[]) {
    
    int T, Case, L, N;
    int i, j;
    int cip[110];
    int ori[110];
    int tmp[110];
    int alpha[26];
    
    scanf("%d", &T);
    Case = 1;
    while (Case <= T) {
        
        scanf("%d %d", &N, &L);
        for (i = 0; i < L; i++) {
            scanf("%d", &cip[i]);
        }
        
        for (i = 0; i < L-1; i++) {
            ori[i+1] = gcd(cip[i], cip[i+1]);
        }
        ori[0] = cip[0] / ori[1];
        ori[L] = cip[L-1] / ori[L-1];
        
        memcpy(tmp, ori, sizeof(tmp));
        qsort(tmp, L+1, sizeof(int), cmp);
        
        j = 0;
        alpha[0] = tmp[0];
        for (i = 1; i <= L; i++) {
            if (alpha[j] != tmp[i]) {
                alpha[j+1] = tmp[i];
                j++;
            }
        }
        
        printf("Case #%d: ", Case);
        for (i = 0; i <= L; i++) {
            for (j = 0; j < 26; j++) {
                if (ori[i] == alpha[j]) {
                    break;
                }
            }
            printf("%c", 65+j);
        }
        
        printf("\n");
        
        Case++;
    }
    
    return 0;
}

//a  b  c  d   e   f   g   h   i   j   k,  l   m   n   o   p   q   r   s   t   u   v   w   x   y    z
//3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103
//CJQUIZKNOWBEVYOFDPFLUXALGORITHMS
