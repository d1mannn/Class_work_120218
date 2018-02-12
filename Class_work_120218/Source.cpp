#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <locale.h>
#include "Header.h"
using namespace std;



void main()
{
	setlocale(LC_ALL, "Rus");
	short int task;
	do
	{
		cout << "¬ведите номер задани€ - ";
		cin >> task;
		switch (task)
		{
			case 2:
			{
				/*2.	ќписать процедуру Smooth(A, N), замен€ющую каждый элемент вещественного массива A размера N 
					на его среднее арифметическое со своими сосед€ми("сглаживание массива").
					ћассив A Ч входной и выходной параметр, N Ч входной параметр.
					— помощью этой процедуры выполнить п€тикратное сглаживание данного массива A размера N, 
					вывод€ на экран результаты каждого сглаживани€.

					¬вести с клавиатуры массив, состо€щий из n строк и m столбцов.
					—оздать библиотеку, в которой будет содержатьс€ функци€, котора€ производит 
					вычислени€ согласно заданию, приведенному в таблице.*/
				int size = SizeOfArr();
				arrFilling(&size, &task);

			} break;

			case 3:
			{	
				int size = SizeOfMatrix();
				int size2 = SizeOfMatrix2();
				int arr[50][50];
				/*MatrixFilling((&arr)[50], &size, &size2, &task);*/
			} break;

			case 4:
			{	
				int size = SizeOfMatrix();
				int size2 = SizeOfMatrix2();
				int arr[50][50];
				MatrixFilling(arr, &size, &size2, &task);
			} break;

			case 5:
			{
				int size = SizeOfMatrix();
				int size2 = SizeOfMatrix2();
				int arr[50][50];
				MatrixFilling(arr, &size, &size2, &task);
			} break;
		}
	} while (task > 0);

}