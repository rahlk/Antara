#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRATEGY 501
#define MAX_PLAYERS 255

int main() {
    struct player {
        char strategy[MAX_STRATEGY];
        int lose;
        int next;
        int length;
    };

    int tCase, tCases, nPlayers, i, j, k, w;

    struct player players[MAX_PLAYERS];

    char strategy[MAX_STRATEGY];
    char moment[MAX_PLAYERS];
    char resp[MAX_STRATEGY];
    char winner;

    int diffs[3];

    while (scanf("%d", &tCases) != EOF) {
        tCase = 1;

        while (tCase <= tCases) {
            
            w = 0;

            scanf("%d", &nPlayers);

            // inicializa os players
            for (i = 0; i < nPlayers; i++) {
                scanf(" %s", strategy);
                strcpy(players[i].strategy, strategy);
                players[i].lose = 0;
                players[i].next = 0;
                players[i].length = strlen(strategy);
            }

            // loop infinito até achar resposta
            while (1) {
                j = 0;

                diffs[0] = 0;
                diffs[1] = 0;
                diffs[2] = 0;

                // primeira rodada
                for (i = 0; i < nPlayers; i++) {

                    if (players[i].lose == 0) {
                        int next = players[i].next;

                        moment[j] = players[i].strategy[next];
                        j += 1;

                        if (moment[j] == 'R') {
                            diffs[0] = 1;
                        } else if (moment[j] == 'P') {
                            diffs[1] = 1;
                        } else {
                            diffs[2] = 1;
                        }
                    }
                }

                moment[j] = '\0';
                winner = 'I';

                int sum = diffs[0] + diffs[1] + diffs[2];

                // Dado a rodada verifica quais jogadores perdem
                for (i = 0; i < nPlayers; i++) {
                    if (players[i].lose == 0) {
                        int next = players[i].next;
                        char jogada = players[i].strategy[next];

                        for (k = 0; k < j; k++) {
                            if (
                                (jogada == 'P' && moment[k] == 'S') ||
                                (jogada == 'S' && moment[k] == 'R') ||
                                (jogada == 'R' && moment[k] == 'P')
                            ) {
                                players[i].lose = 1;
                                break;
                            }
                        }

                        if (players[i].lose == 0) {
                            if (sum == 2)
                                winner = jogada;
                            else if (jogada == 'P')
                                winner = 'S';
                            else if (jogada == 'S')
                                winner = 'R';
                            else if (jogada == 'R')
                                winner = 'P';
                        }
                    }
                }

                if (winner == 'I') {
                    strcpy(resp, "IMPOSSIBLE");
                    break;
                }

                resp[w] = winner;
                w += 1;

                if (w >= j || sum == 1) {
                    resp[w] = '\0';
                    break;
                }

                // Atualiza a proxima jogada dos players
                for (i = 0; i < nPlayers; i++) {
                    players[i].next += 1;
                    if (players[i].next >= players[i].length) { players[i].next = 0; }
                }
            }

            printf("Case #%d: %s\n", tCase, resp);

            tCase += 1;
        }
    }

    return 0;
}
