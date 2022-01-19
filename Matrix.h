#pragma once



struct Matrix
{
	unsigned rows;
	unsigned columns;
	float** data;

	void MultiplyWithScalar(float scalar);
	void enterData();
	
};
