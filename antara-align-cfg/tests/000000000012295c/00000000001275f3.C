#include <stdio.h>
#include <string.h>

#define MAX_Q 100001

//void generate_guessing_matrix(int matrix[][], rows, cols);

void zera_matriz(int X[MAX_Q], int Y[MAX_Q], int n) {
    int i, j;

    for ( i=0; i < n; i++) {
        X[i] = 0;
        Y[i] = 0;
    }
}


void imprime_matriz(int X[MAX_Q], int Y[MAX_Q], int n) {
    int i, j;

    for ( i=0; i < n; i++) {
        for ( j=0; j < n; j++) {
            printf("%d ", X[i] + Y[j]);
        }
        printf("\n");
    }
}

int main() {
  int T; scanf("%d", &T);
  int id;

  int Q, P;
  int X[MAX_Q];
  int Y[MAX_Q];
  int x_acumulado;
  int y_acumulado;

  for (id = 1; id <= T; ++id) {
    int i;
    int x, y;
    char d;

    scanf("%d %d", &P, &Q);
    Q++;

    zera_matriz(X, Y, Q);
    x_acumulado = 0;
    y_acumulado = 0;

    for (i=0; i < P; i++) {
        scanf("%d %d %c\n", &x, &y, &d);
        int k;

        if ( d == 'N' ) {
            // Todos x +1
            x_acumulado++;
            for ( k=y+1; k < Q; k++ ) { Y[k]++; }
        } else if ( d == 'S' ) {
            // Todos x +1
            x_acumulado++;
            for ( k=y-1; k >= 0; k-- ) { Y[k]++; }
        } else if ( d == 'E' ) {
            // Todos y +1
            y_acumulado++;
            for ( k=x+1; k < Q; k++ ) { X[k]++; }
        } else if ( d == 'W' ) {
            // Todos y +1
            y_acumulado++;
            for ( k=x-1; k >= 0; k-- ) { X[k]++; }
        }
    }

    int max_x = 0;
    int max_y = 0;
    int val = 0;

    // Encontra maior intercecao
    for (x=0; x < Q; x++) {
        for (y=0; y < Q; y++) {
            if ( X[x] + x_acumulado + Y[y] + y_acumulado >  val ) {
                val = X[x] + x_acumulado + Y[y] + y_acumulado;
                max_x = x;
                max_y = y;
            }
        }
    }

    printf("Case #%d: %d %d\n", id, max_x, max_y);

  }
  return 0;
}
