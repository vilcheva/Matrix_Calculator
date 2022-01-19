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