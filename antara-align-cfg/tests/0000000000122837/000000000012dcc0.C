#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int W, T, V;
    int *R;

    scanf("%d %d", &T, &W);
    R = (int *)malloc(sizeof(int) * 6);

    for (t = 0; t < T; t++)
    {
        printf("1\n");
        scanf("%d", &R[0]);

        printf("2\n");
        scanf("%d", &R[1]);
        R[1] = R[1] - 2 * R[0];

        printf("3\n");
        scanf("%d", &R[2]);
        R[2] = R[2] - R[1] - 3 * R[0];

        printf("4\n");
        scanf("%d", &R[3]);
        R[3] = R[3] - R[2] - 2 * R[1] - 4 * R[0];

        printf("5\n");
        scanf("%d", &R[4]);
        R[4] = R[4] - R[3] - R[2] - 2 * R[1] - 5 * R[0];

        printf("6\n");
        scanf("%d", &R[5]);
        R[5] = R[5] - R[4] - R[3] - 2 * R[2] - 3 * R[1] - 6 * R[0];

        printf("%d %d %d %d %d %d\n", R[0], R[1], R[2], R[3], R[4], R[5]);
        scanf("%d", &V);

        if (V == -1)
        {
            break;
        }
    }

    return 0;
}