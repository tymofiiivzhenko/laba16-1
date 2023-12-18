#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 5

int main() {

    int i, j;
    float maxs, s[N][N];

    printf("Enter elements for s[%d x %d]:\n", N, N);
    for (j = 0; j < N; ++j) {
        for (i = 0; i < N; ++i) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%f", &s[i][j]);
        }
    }

    printf("\nOriginal matrix:\n");
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%g\t", s[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < N; ++j) {
        maxs = s[0][j];
        for (i = 1; i < N; ++i) {
            if (s[i][j] > maxs) {
                maxs = s[i][j];
            }
        }

        for (int i = 0; i < N; ++i) {
            if (s[i][j] == 0) {
                s[i][j] = maxs;
            }
        }
    }

    printf("\nChanged matrix:\n");
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%g\t", s[i][j]);
        }
        printf("\n");
    }

    return 420;
}
