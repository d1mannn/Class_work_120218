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
		cout << "������� ����� ������� - ";
		cin >> task;
		switch (task)
		{
			case 2:
			{
				/*2.	������� ��������� Smooth(A, N), ���������� ������ ������� ������������� ������� A ������� N 
					�� ��� ������� �������������� �� ������ ��������("����������� �������").
					������ A � ������� � �������� ��������, N � ������� ��������.
					� ������� ���� ��������� ��������� ����������� ����������� ������� ������� A ������� N, 
					������ �� ����� ���������� ������� �����������.

					������ � ���������� ������, ��������� �� n ����� � m ��������.
					������� ����������, � ������� ����� ����������� �������, ������� ���������� 
					���������� �������� �������, ������������ � �������.*/
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