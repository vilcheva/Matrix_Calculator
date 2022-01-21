/**
*
* Solution to course project # 11
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Velichka Ilcheva
* @idnumber 8MI0600051
* @compiler VC
*
* <file with created structure and function declaration>
*
*/

#pragma once

struct Matrix
{
	unsigned rows;
	unsigned columns;
	float** data;

	void enterData();
	void outputData();
	void FillingOfAMatrix(int number);
	float FindDeterminantOfM3();
	float FindSubmatrixAndDeterminant();
	float FindDeterminant();
	Matrix MultiplyWithScalar(float scalar);
	Matrix MakeANewMatrix(unsigned rows, unsigned columns);
	Matrix MartixTransposition();
	Matrix SumOfTwoMatrices(Matrix A, Matrix B);
	Matrix MultiplicationOfTwoMatrices(Matrix A, Matrix B);
	void DeleteData();


};