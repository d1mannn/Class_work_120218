#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <locale.h>
#include "Header.h"
using namespace std;

int SizeOfArr()
{
	setlocale(LC_ALL, "Rus");
	int arr[50], size;
	do
	{
		cout << "¬ведите размерность массива от 1 до 50 - ";
		cin >> size;
	} while (size < 1 || size > 50);
	return size;
}

int SizeOfMatrix()
{
	setlocale(LC_ALL, "Rus");
	int arr[50], size;
	do
	{
		cout << "¬ведите кол-во строк матрицы от 1 до 50 - ";
		cin >> size;
	} while (size < 1 || size > 50);
	return size;
}

int SizeOfMatrix2()
{
	setlocale(LC_ALL, "Rus");
	int arr[50], size2;
	do
	{
		cout << "¬ведите кол-во столбцов матрицы от 1 до 50 - ";
		cin >> size2;
	} while (size2 < 1 || size2 > 50);
	return size2;
}

void arrFilling(int *size, short int *task)
{
	srand(time(NULL));
	int arr[50];
	for (int i = 0; i < *size; i++)
	{
		arr[i] = -100 + rand() % 200;
		cout << arr[i] << endl;
	}
	switch (*task)
	{
		case 2:
		{
			const int count = 5;
			Smooth(arr, size, &count);
		} break;
	}
}

int MatrixFilling(int (*arr)[50], int *size, int *size2, short int *task)
{	
	srand(time(0));
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size2; j++)
		{
			arr[i][j] = -100 + rand() % 200;
		}
	}
	switch (*task)
	{
		case 4:
		{
			printMatrix(arr, size, size2);
		} break;

		case 5:
		{	
			int arr2[50] = { 0 };
			TwotoOne(arr, size, size2, arr2);
		} break;
	}

	return (*arr)[50];
}

void printArr(int *arr, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		cout << arr[i] << "\t";
	} cout << endl;
}

void printMatrix(int(*arr)[50], int *size, int *size2)
{
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size2; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void Smooth(int *arr, int *size, const int *count)
{	
	int m[50];
	
	for (int l = 0; l < *count; l++)
	{	
		arr++;
		for (int j = 1; j < *size - 1; j++)
		{
			//arr[j] = (arr[j - 1] + arr[j] + arr [j + 1]) / 3  то же самое, что и ниже
			*arr = (*(arr - 1) + *arr + *(arr + 1)) / 3; // тоже самое что и выше
			/*cout << *arr << endl;*/
			arr++;
		}
		arr = arr - (*size - 1);
		printArr(arr, size);
	}
}

int SumIndex(int(*arr)[50], int *size, int *size2, int &col, int &row, int &max)
{
	int sum = 0;
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size2; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				col = j;
				row = i;
				sum = i + j;
			}
		}
	}
	return sum;
}

void TwotoOne(int (*arr)[50], int *size, int *size2, int arr2[50])
{
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size2; j++)
		{
			arr2[j] += arr[i][j];
		}
	}
	printMatrix(arr, size, size2);
	cout << "========" << endl;
	printArr(arr2, size);
}