#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

#include <cstdint>

constexpr int32_t MAX_SIZE = 100;  

void InputSizeMatrix(int32_t& rows, int32_t& columns);
void FillMatrix(int32_t matrix[MAX_SIZE][MAX_SIZE], int32_t rows, int32_t columns);
void PrintMatrix(int32_t matrix[MAX_SIZE][MAX_SIZE], int32_t rows, int32_t columns);
void FindMaxElementLowerRightTriangle(int32_t matrix[MAX_SIZE][MAX_SIZE], int32_t rows, int32_t cols);
void MaxElementZeroPosition(int32_t matrix[MAX_SIZE][MAX_SIZE], int32_t rows, int32_t columns);
void MaxLocalMaximum(int32_t matrix[MAX_SIZE][MAX_SIZE], int32_t rows, int32_t columns);
void SecondaryDiagonalProduct(int32_t matrix[MAX_SIZE][MAX_SIZE], int32_t rows, int32_t columns);

#endif
