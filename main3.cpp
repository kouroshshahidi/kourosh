#include <stdio.h>

int main(void) {
    int m, n, k, countBomb;
    scanf("%d %d", &m, &n);

    scanf("%d", &k);
    int bomb[k][2];
    for (int i = 0; i < k; ++i) {
        scanf("%d %d", &bomb[i][0], &bomb[i][1]);
    }

    int A[100][100] = {{0, 0},
                       {0, 0}};
    int B[8][2] = {{-1, -1},
                   {-1, 0},
                   {-1, 1},
                   {0,  -1},
                   {1,  -1},
                   {1,  0},
                   {1,  1},
                   {0,  1}};
    for (int i = 0; i < k; ++i) {
        A[bomb[i][0] - 1][bomb[i][1] - 1] = 9;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            countBomb = 0;
            for (int l = 0; l < 8; ++l) {
                if (i + B[l][0] < m && i + B[l][0] >= 0 && j + B[l][1] < n && j + B[l][1] >= 0) {
                    if (A[i + B[l][0]][j + B[l][1]] == 9) countBomb++;
                }
            }
            if (A[i][j] < 9) A[i][j] = countBomb;
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] == 9) printf("* ");
            else printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}