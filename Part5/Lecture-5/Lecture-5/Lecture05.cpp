#include<iostream>
using namespace std;
int main()
{
	/*1D Array*/
	//DataType name[size of the array]
	int marks[3] = { 2,4,5 };
	/*
	* marks[0] = 2; //indexing
	* marks[1] = 4;
	* marks[2] = 5;
	*/
	for (int i = 0; i < 3; i++) {
		cout << "Index " << i << " " << marks[i] << endl;
	}

	/*How to take user input in array*/
	int oneDimensionalArray[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter the value for index " << i << " ";
		cin >> oneDimensionalArray[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "Index " << i << " " << oneDimensionalArray[i] << endl;
	}
	cout << "-------------------------------------\n";
	/*2D Array*/
	//DataType name[row][column]
	cout << "2D Array begins\n";
	int matrix1[2][2] = { {1,2},
							{3,4} };
	/*
	* matrix1[0][0] = 1; //indexing
	* matrix1[0][1] = 2;
	* matrix1[1]0]  = 3;
	* matrix1[1][1] = 4;
	*/
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
		{
			cout << "Index " << i <<j << " " << matrix1[i][j] << "\t";
		}
		cout <<endl;
	}
	/*How to take user input in 2D array*/
	int matrix2[2][2];
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
		{
			cout << "Enter the value for index " << i << j << " ";
			cin >> matrix2[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
		{
			cout << "Index " << i << j << " " << matrix2[i][j] << "\t";
		}
		cout << endl;
	}


}