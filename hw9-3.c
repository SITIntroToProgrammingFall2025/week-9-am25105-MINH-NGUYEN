#include <stdio.h>
int main() {
    double a[2][3];
    double b[3][2];
    double c[2][2];
    int i, j, k;
    for (i = 0; i < 2;i++) {
        for (j = 0; j < 3; j++) {
            scanf("%lf", &a[i][j]);
        }
    }
    //The first matrix
    for (i = 0; i < 3;i++) {
        for (j = 0; j < 2; j++) {
            scanf("%lf", &b[i][j]);
        }
    }
    //The second matrix
    printf("The first matrix you entered is\n");
    //Print the first matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.1lf ", a[i][j]);
        }
        printf("\n");
    }
    //Print the second matrix
    printf("The second matrix you entered is\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.1lf ", b[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    printf("The multiplication product of matrix A and matrix B:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.1lf ", c[i][j]);
        }
        printf("\n");
    }
}


