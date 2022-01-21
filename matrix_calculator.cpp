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
* <file with the menu and the possibility for the user to work with the calculator>
*
*/

#include "Matrix.h"
#include <iostream>

using namespace std;

void Menu()
{
	cout << "WELCOME TO MATRIX CALCULATOR!" << endl;
	cout << "0.Finish your work with the calculator." << endl;
	cout << "1.Find the sum of two matrices." << endl;
	cout << "2.Find the multiplication of a matrix by a scalar." << endl;
	cout << "3.Find the division of a matrix by a scalar." << endl;
	cout << "4.Find the multiplication of a matrix by a matrix." << endl;
	cout << "5.Finding the transposed matrix." << endl;
	cout << "6.Finding the determinant of a matrix." << endl;
}

int main()
{
	Matrix A;
	Matrix B;
	Matrix result;
	float scalar;
	Menu();
	int command = -1;
	while (command != 0)
	{
		cout << "Choose number of a command: ";
		cin >> command;
		switch (command)
		{
		case 0:break;
		case 1: {cout << "Both matrices must have equal rows and columns." << endl;
			A.enterData();
			B.enterData();
			if (A.rows != B.rows || A.columns != B.columns)
			{
				cout << "!!!Wrong size" << endl;
				continue;
			}
			result = A.SumOfTwoMatrices(A, B);
			break;
		}
		case 2: { A.enterData();
			cout << "Enter a scalar: ";
			cin >> scalar;
			result = A.MultiplyWithScalar(scalar);
			break;
		}
		case 3: {A.enterData();
			cout << "Scalar must be different from 0. Enter a scalar: ";
			cin >> scalar;
			if (scalar == 0)
			{
				cout << "Cannot be divided by 0!" << endl;
				continue;
			}
			result = A.MultiplyWithScalar(1 / scalar);
			break;
		}
		case 4: {cout << "The number of columns in the first matrix must be equal to the number of rows in the second." << endl;
			A.enterData();
			B.enterData();
			if (A.columns != B.rows)
			{
				cout << "!!!Wrong size" << endl;
				continue;
			}
			result = A.MultiplicationOfTwoMatrices(A, B);
			break;
		}
		case 5: {A.enterData();
			result = A.MartixTransposition();
			break; }
		case 6: {cout << "Columns and rows must be equal and must be between 1 and 4 and." << endl;
			A.enterData();
			if (A.rows != A.columns || A.rows > 4)
			{
				cout << "!!!Wrong size" << endl;
				continue;
			}
			cout << "The determinant is: ";
			cout << A.FindDeterminant() << endl;
			break; }
		default: cout << "Wrong command!" << endl;
			break;
		}
		if (command >= 1 && command <= 5)
			result.outputData();

	}
	A.DeleteData();
	B.DeleteData();
	result.DeleteData();
}

