#pragma once

struct Matrix
{
	unsigned rows;
	unsigned columns;
	float** data;

	void enterData();
	void outputData();
	void FillingOfAMatrix(int number);
	Matrix MultiplyWithScalar(float scalar);
	Matrix DevideWithScalar(float scalar);
	Matrix MakeANewMatrix(unsigned rows, unsigned columns);
	Matrix MartixTransposition();
	Matrix SumOfTwoMatrices(Matrix A, Matrix B);
	Matrix MultiplicationOfTwoMatrices(Matrix A, Matrix B);


};