//ASHIQ ALI N K 24100673
#include <stdio.h>

#define MAX_SIZE 10 

void square_matrix(int r1, int c1) {
    if (r1 != c1) {
        printf("\nMatrix should be a square matrix.\n");
    }
}

void print_array(int mat[MAX_SIZE][MAX_SIZE], int a, int b) {
    printf("Matrix elements:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void sum_uppermatrix(int mat[MAX_SIZE][MAX_SIZE], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += mat[i][j];
        }
    }
    printf("Sum of upper triangular matrix: %d\n", sum);
}

void row_product(int mat[MAX_SIZE][MAX_SIZE], int a, int b) {
    for (int i = 0; i < a; i++) {
        int product = 1;
        for (int j = 0; j < b; j++)
            product *= mat[i][j];
        printf("Product of row %d: %d\n", i + 1, product);
    }
}

void search_element(int mat[MAX_SIZE][MAX_SIZE], int a, int b, int key) {
    int found = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (mat[i][j] == key) {
                printf("Element %d found at (%d,%d)\n", key, i, j);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("Element %d not found.\n", key);
    }
}

int main() {
    int r1, c1, r2, c2, key;
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE];

    printf("\nEnter the rows and columns for the first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("\nEnter the rows and columns for the second matrix: ");
    scanf("%d%d", &r2, &c2);

    square_matrix(r1, c1);

    printf("\nEnter the elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    row_product(mat1, r1, c1);
    print_array(mat1, r1, c1);
    sum_uppermatrix(mat1, r1);

    square_matrix(r2, c2);

    printf("\nEnter the elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    print_array(mat2, r2, c2);
    sum_uppermatrix(mat2, r2);

    printf("\nEnter the element to search: ");
    scanf("%d", &key);
    search_element(mat1, r1, c1, key);
    search_element(mat2, r2, c2, key);

    return 0;
}
