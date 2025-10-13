#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    // Read dimensions of matrix A
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);

    // Read dimensions of matrix B
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);

    // Check multiplication compatibility
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of A (%d) must equal rows of B (%d).\n", n, p);
        return 1;
    }

    int A[m][n], B[p][q], product[m][q];

    // Read matrix A
    printf("Enter matrix A (%d x %d) in row-major order:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read matrix B
    printf("Enter matrix B (%d x %d) in row-major order:\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize product matrix to zero
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            product[i][j] = 0;
        }
    }

    // Compute product A * B
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrix A
    printf("Matrix A (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("Matrix B (%d x %d):\n", p, q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Print product matrix
    printf("Product of A and B (%d x %d):\n", m, q);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
