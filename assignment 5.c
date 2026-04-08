#include <stdio.h>
#include <math.h>

int main() {
    int A[10][10], B[10][10], sum[10][10];
    int r, c, i, j, k;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    /* --- Matrix A input --- */
    printf("Enter elements of Matrix A:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &A[i][j]);

    /* --- Matrix B input --- */
    printf("Enter elements of Matrix B:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &B[i][j]);

    /* --- 1. Matrix Addition --- */
    printf("\nMatrix Addition:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    /* --- 2. Saddle Point --- */
    printf("\nSaddle Points in A:\n");
    int found = 0;
    for(i=0; i<r; i++) {
        int min = A[i][0], col = 0;
        for(j=1; j<c; j++) {
            if(A[i][j] < min) { min = A[i][j]; col = j; }
        }
        int isSaddle = 1;
        for(k=0; k<r; k++) {
            if(A[k][col] > min) isSaddle = 0;
        }
        if(isSaddle) {
            printf("Saddle point at A[%d][%d] = %d\n", i, col, min);
            found = 1;
        }
    }
    if(!found) printf("No saddle point found.\n");

    /* --- 3. Inverse of 2x2 Matrix A --- */
    if(r == 2 && c == 2) {
        int det = A[0][0]*A[1][1] - A[0][1]*A[1][0];
        if(det == 0) {
            printf("\nInverse not possible (det = 0)\n");
        } else {
            printf("\nInverse of A:\n");
            printf("%.4f %.4f\n", (float)A[1][1]/det,  (float)-A[0][1]/det);
            printf("%.4f %.4f\n", (float)-A[1][0]/det, (float)A[0][0]/det);
        }
    }

    /* --- 4. Magic Square Check on A --- */
    int sumRow = 0, magic = 1;
    for(j=0; j<c; j++) sumRow += A[0][j];
    for(i=1; i<r; i++) {
        int s = 0;
        for(j=0; j<c; j++) s += A[i][j];
        if(s != sumRow) magic = 0;
    }
    for(j=0; j<c; j++) {
        int s = 0;
        for(i=0; i<r; i++) s += A[i][j];
        if(s != sumRow) magic = 0;
    }
    int d1=0, d2=0;
    for(i=0; i<r; i++) { d1 += A[i][i]; d2 += A[i][r-1-i]; }
    if(d1 != sumRow || d2 != sumRow) magic = 0;
    printf("\nMatrix A is %s Magic Square.\n", magic ? "a" : "NOT a");

    return 0;
}