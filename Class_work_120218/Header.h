#pragma once
int SizeOfArr();
void arrFilling(int *size,short int *task);
void Smooth(int *arr, int *size, const int *count);
int SumIndex(int(*arr)[50], int *size, int *size2, int &col, int &row, int &max);
void printMatrix(int(*arr)[50], int *size, int *size2);
int MatrixFilling(int(*arr)[50], int *size, int *size2, short int *task);
int SizeOfMatrix();
int SizeOfMatrix2();
void TwotoOne(int(*arr)[50], int *size, int *size2, int arr2[50]);