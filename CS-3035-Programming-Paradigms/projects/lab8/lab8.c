#include <stdio.h>

void matrixAdd(int a[][3], int b[][3], int sum[][3]);
void matrixSub(int a[][3], int b[][3], int sum[][3]);
void matrixTran(int a[][3], int tran[][3]);

int main ( void ) {

    int a[][3] = {{1,3,5},{1,3,5},{1,3,5}};
    int b[][3] = {{1,3,5},{1,3,5},{1,3,5}};
    int sum[3][3];

    matrixAdd(a, b, sum);
    matrixSub(a, b, sum);
    matrixTran(a, sum);

    return 0;
}   // end main

void matrixAdd(int a[][3], int b[][3], int sum[][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }

        printf("%d %d %d\n", sum[i][0], sum[i][1], sum[i][2]);
    }
} // end matrixAdd

void matrixSub(int a[][3], int b[][3], int sum[][3]) {
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] - b[i][j];
        }

        printf("%d %d %d\n", sum[i][0], sum[i][1], sum[i][2]);
    }
} //end matrixSub

void matrixTran(int a[3][3], int tran[3][3]) {
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tran[j][i] = a[i][j];
        }

        printf("%d %d %d\n", tran[0][i], tran[1][i], tran[2][i]);
    }
}
