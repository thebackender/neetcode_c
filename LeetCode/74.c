#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    printf("%d", matrix[0][0]);
    return true;
}

int main() {
    int matrix[100][100] = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    printf("%f", searchMatrix(&(*matrix), 4, 3, 9));
    return 0;
}