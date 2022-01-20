#include "Matrix.h"
#include <iostream>

using namespace std;

void Matrix::enterData()
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter columns: ";
	cin >> columns;
	data = new float* [rows];
	for (unsigned i = 0; i < rows; i++)
	{
		data[i] = new float[columns];
		for (unsigned j = 0; j < columns; j++)
		{
			cin >> data[i][j];
		}
	}
}
void Matrix::outputData()
{
	for (unsigned i = 0; i < rows; i++)
	{
		cout << '(';
		cout << ' ';
		for (unsigned j = 0; j < columns; j++)
		{
			cout << data[i][j];
			cout << ' ';
		}
		cout << ')';
		cout << endl;
	}
}
void Matrix::FillingOfAMatrix(int number)
{
	for (unsigned i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			data[i][j] = number;
		}
	}
}
Matrix Matrix::MakeANewMatrix(unsigned rows, unsigned col)
{
	Matrix result;
	result.rows = rows;
	result.columns = col;
	result.data = new float* [result.rows];
	for (unsigned i = 0; i < result.rows; i++)
	{
		result.data[i] = new float[result.columns];
	}
	return result;
}
Matrix Matrix::MultiplyWithScalar(float scalar)
{
	Matrix result = MakeANewMatrix(rows, columns);
	result.FillingOfAMatrix(1);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			result.data[i][j] = data[i][j] * scalar;
		}
	}
	return result;
}
Matrix Matrix::DevideWithScalar(float scalar)
{
	Matrix result = MakeANewMatrix(rows, columns);
	result.FillingOfAMatrix(1);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			result.data[i][j] = data[i][j] / scalar;
		}
	}
	return result;
}
Matrix Matrix::MartixTransposition()
{
	Matrix transponedArray = MakeANewMatrix(columns, rows);
	transponedArray.FillingOfAMatrix(0);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			transponedArray.data[j][i] = data[i][j];
		}
	}
	return transponedArray;
}
Matrix Matrix::SumOfTwoMatrices(Matrix A, Matrix B)
{
	Matrix result = MakeANewMatrix(A.rows, A.columns);
	result.FillingOfAMatrix(0);
	if (A.rows != B.rows || A.columns != B.columns)
		cout << "Both matrices must have an equal number of columns and an equal number of rows." << endl;
	else
	{
		for (unsigned i = 0; i < A.rows; i++)
		{
			for (unsigned j = 0; j < A.columns; j++)
			{
				result.data[i][j] = A.data[i][j] + B.data[i][j];
			}
		}
	}
	return result;
}
Matrix Matrix::MultiplicationOfTwoMatrices(Matrix A, Matrix B)
{
	Matrix result = MakeANewMatrix(A.rows, B.columns);
	result.FillingOfAMatrix(0);
	if (A.columns != B.rows)
	{
		cout << "The number of columns in the first matrix must be equal to the number of rows in the second." << endl;
	}
	else
	{
		for (unsigned i = 0; i < A.rows; i++)
		{
			for (unsigned j = 0; j < B.columns; j++)
			{
				for (unsigned y = 0; y < A.columns; y++)
				{
					result.data[i][j] += A.data[i][y] * B.data[y][j];
				}
			}
		}
	}
	return result;
}