#include <stdio.h>

int main() {
    int N, i, j, num = 1, direction = 0;
    scanf("%d", &N);
    int matrix[N][N];
    int rowStart = 0, rowEnd = N - 1, colStart = 0, colEnd = N - 1;

    while (num <= N * N) {
        if (direction == 0) {
            for (j = colStart; j <= colEnd && num <= N * N; j++) {
                matrix[rowStart][j] = num++;
            }
            rowStart++;
            direction++;
        } else if (direction == 1) {
            for (i = rowStart; i <= rowEnd && num <= N * N; i++) {
                matrix[i][colEnd] = num++;
            }
            colEnd--;
            direction++;
        } else if (direction == 2) {
            for (j = colEnd; j >= colStart && num <= N * N; j--) {
                matrix[rowEnd][j] = num++;
            }
            rowEnd--;
            direction++;
        } else {
            for (i = rowEnd; i >= rowStart && num <= N * N; i--) {
                matrix[i][colStart] = num++;
            }
            colStart++;
            direction = 0;
        }
    }

    // print the matrix
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}