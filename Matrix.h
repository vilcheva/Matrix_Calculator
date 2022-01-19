#pragma once

struct Matrix
{
	unsigned rows;
	unsigned columns;
	float** data;

	void enterData();
	void MultiplyWithScalar(float scalar);
	void DevideWithScalar(float scalar);
	void outputData();
	Matrix MartixTransposition();
	Matrix SumOfTwoMatrices(Matrix A, Matrix B);
	Matrix MultiplicationOfTwoMatrices(Matrix A, Matrix B);


};