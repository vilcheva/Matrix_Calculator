#include "Matrix.h"
#include <iostream>



using namespace std;

void Menu()
{
	cout << "WELCOME TO MATRIX CALCULATOR!"<<endl;
	cout << "1.Find the sum of two matrices."<<endl;
	cout << "2.Find the multiplication of a matrix by a scalar"<<endl;
	cout << "3.Find the division of a matrix by a scalar."<<endl;
	cout << "4.Find the multiplication of a matrix by a matrix" << endl;
	cout << "5.Finding a transposed matrix"<<endl;
}

int main()
{
	Matrix A;
	Matrix B;
	Matrix result;
	float scalar;
	Menu();
	int command=-1;
	while (command != 0)
	{
		cout << "Choose number of a command: ";
		cin >> command;
		switch (command)
		{
		case 0:break;
		case 1: {A.enterData();
			B.enterData();
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
			cout << "Enter a scalar: ";
			cin >> scalar;
			result = A.DevideWithScalar(scalar);
			break;
		}
		case 4: {A.enterData();
			B.enterData();
			result = A.MultiplicationOfTwoMatrices(A, B);
			break;
		}
		case 5: {A.enterData();
			result = A.MartixTransposition();
			break; }
		default: cout << "Wrong command"<<endl;
			break;
		}
		if(command>=1 && command<=5)
		result.outputData();
	}

}

