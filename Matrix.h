#pragma once

struct Matrix
{
	unsigned rows;
	unsigned columns;
	float** data;

	void enterData();
	void MultiplyWithScalar(float scalar);
	void DevideWithScalar(float scalar);
	Matrix MartixTransposition();


};
