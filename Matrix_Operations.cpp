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
		data[i] = new float [columns];
		for (unsigned j = 0; j < columns; j++)
		{
			cin >> data[i][j];
		}
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