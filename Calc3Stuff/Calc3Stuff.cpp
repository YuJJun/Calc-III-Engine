/* 
	Name: John Yoo
	Date: 8/2/18
	Code: C++

	Desc: Functions for Multivariable Calculus, including:

		- Vectors
		- Integrals
		- Etc.

*/

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include "Vec3D.h"

using namespace std;

//Calc III vector function prototypes
void dotProdPrint(Vec3D v1, Vec3D v2);
void scalarMultPrint(Vec3D v, float scalar);
void vecAddPrint(Vec3D v1, Vec3D v2);
void vecMagPrint(Vec3D v1);
void crossProdPrint(Vec3D v1, Vec3D v2);

//Miscellaneous
void printIntro();
void doFunction(int);
void pauseClear();

Vec3D v1;
Vec3D v2;
float x, y, z;

int main()
{

	int choice; //Determines what function you use in program
	char repeat; //Repeat of program

	do
	{
		system("cls");

		cout << "Welcome to the Calc III engine." << endl << endl;
		cout << "Below are some options for you. Type the corresponding number to access it." << endl << endl;

		printIntro();
		cout << endl;

		cin >> choice;
		system("cls");

		doFunction(choice);
		pauseClear();

		cout << "Would you like to repeat the program? Type 'y' for yes and 'n' for no." << endl << endl;
		cin >> repeat;

	} while (repeat == 'y');

	system("cls");
	cout << "Bye!" << endl << endl;

    return 0;
}

void printIntro()
{
	cout << "1: Dot Product" << endl;
	cout << "2: Scalar-Vector Multiplication" << endl;
	cout << "3: Vector Addtion" << endl;
	cout << "4: Vector Magnitude" << endl;
	cout << "5: Cross Product" << endl << endl;
}

void doFunction(int choice)
{
	switch (choice)
	{
		case 1:
		{
			cout << "Enter numbers for Vec 1: ";
			cin >> v1;
			cout << endl << "Enter numbers for Vec 2: ";
			cin >> v2;
			cout << endl;

			dotProdPrint(v1, v2);
			break;
		}

		case 2:
		{
			cout << "Enter numbers for Vec 1: ";
			cin >> v1;
			cout << endl << "Enter number for scalar: ";
			cin >> x;
			cout << endl;

			scalarMultPrint(v1, x);
			break;
		}

		case 3:
		{
			cout << "Enter numbers for Vec 1: ";
			cin >> v1;
			cout << endl << "Enter numbers for Vec 2: ";
			cin >> v2;
			cout << endl;

			vecAddPrint(v1, v2);
			break;
		}

		case 4:
		{
			cout << "Enter numbers for Vec 1: ";
			cin >> v1;
			cout << endl;

			vecMagPrint(v1);
			break;
		}
		
		case 5:
		{
			cout << "Enter numbers for Vec 1: ";
			cin >> v1;
			cout << endl << "Enter numbers for Vec 2: ";
			cin >> v2;
			cout << endl;

			crossProdPrint(v1, v2);
			break;
		}

		default:
		{
			cout << "The number was not recognized." << endl << endl;
			break;
		}
	}
}

void pauseClear()
{
	system("pause");
	system("cls");
}


void dotProdPrint(Vec3D v1, Vec3D v2)
{
	cout << "Vector 1: " << v1 << endl;
	cout << "Vector 2: " << v2 << endl << endl;

	cout << "Dot Product of Vec 1 and 2: " << v1.dotProduct(v2) << endl << endl;
}

void scalarMultPrint(Vec3D v, float scalar)
{
	cout << "Vector 1: " << v << endl;
	cout << "Scalar: " << scalar << endl << endl;

	cout << "Scalar Multiplication of Vec 1 and scalar: " << v.scalarMult(scalar) << endl << endl;
}

void vecAddPrint(Vec3D v1, Vec3D v2)
{
	cout << "Vector 1: " << v1 << endl;
	cout << "Vector 2: " << v2 << endl << endl;

	cout << "Vector Addition of Vec 1 and 2: " << v1.vecAdd(v2) << endl << endl;
}

void vecMagPrint(Vec3D v1)
{
	cout << "Vector: " << v1 << endl;

	cout << "Vector Magnitude of vector: " << v1.vecMag() << endl << endl;
}

void crossProdPrint(Vec3D v1, Vec3D v2)
{
	cout << "Vector 1: " << v1 << endl;
	cout << "Vector 2: " << v2 << endl << endl;

	cout << "Cross Product of Vec 1 and 2: " << v1.crossProduct(v2) << endl << endl;
}
