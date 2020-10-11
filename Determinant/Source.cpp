#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
    int a[3][3], i, j, det;

    printf("Determinant of 3x3 matrix:\n");
    for (i = 0;i < 3;i++) for (j = 0;j < 3;j++) scanf("%d", &a[i][j]);
    
    printf("\nThe matrix is\n");
    for (i = 0;i < 3; i++) 
    {
        for (j = 0;j < 3; j++) printf("%d\t", a[i][j]);
        printf("\n");
    }

    det = (a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1]) - (a[2][0] * a[1][1] * a[0][2]) - (a[2][1] * a[1][2] * a[0][0]) - (a[2][2] * a[1][0] * a[0][1]);

    printf("\n%d", det);

    return 0;
}