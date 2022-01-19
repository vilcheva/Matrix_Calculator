#include "Matrix.h"
#include <iostream>

using namespace std;

void Matrix::enterData()
{
	cin >> rows;
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
void Matrix::MultiplyWithScalar(float scalar)
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			data[i][j] *= scalar;
		}
	}

}
void Matrix::DevideWithScalar(float scalar)
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			data[i][j] /= scalar;
		}
	}
}
Matrix Matrix::MartixTransposition()
{
	Matrix transponedArray;
	transponedArray.columns = rows;
	transponedArray.rows = columns;
	float** newArray = new float* [transponedArray.rows];
	for (int i = 0; i < transponedArray.rows; i++)
	{
		newArray[i] = new float[transponedArray.columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			newArray[j][i] = data[i][j];
		}
	}
	transponedArray.data = newArray;
	return transponedArray;
}
Matrix Matrix::SumOfTwoMatrices(Matrix A, Matrix B)
{
	Matrix result;
	result.rows = A.rows;
	result.columns = A.columns;
	result.data = new float* [result.rows];
	for (unsigned i = 0; i < result.rows; i++)
	{
		result.data[i] = new float[result.columns];
	}
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
	Matrix result;
	result.rows = A.rows;
	result.columns = B.columns;
	result.data = new float* [result.rows];
	for (unsigned i = 0; i < result.rows; i++)
	{
		result.data[i] = new float[result.columns];
		for (unsigned j = 0; j < result.columns; j++)
		{
			result.data[i][j] = 0;
		}
	}
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