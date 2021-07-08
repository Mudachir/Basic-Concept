#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	//How to print something in C++
	cout << "Mudachir\n";

	//how to use escape sequence. There is more escape sequence google it.
	cout << "Mudachir\t192184" << endl;
	cout << "Department\tECE\n";
	//keyword, variable & datatype
	
	int num1;//variable declaration
	int num2;
	double num3;
	char ch;
	
	num1 = 5;//variable initialization
	num2 = 10;
	num3 = 2.4566445;
	ch = 'M';

	cout << "Number 1 = " << num1 << " Number 2 = " << num2 << " Number 3 = " << num3 << " Char = " << ch <<endl;

	//String variable

	char name[10] = "Mudachir";
	cout << "Name is " << name << endl;

	//how to take user input
	int variable_1, variable_2;
	char fullName[20];
	cout << "Enter variable 1 ";
	cin >> variable_1;
	cout << "Enter variable 2 ";
	cin >> variable_2;
	int sum = variable_1 + variable_2;
	cout << "Variable 1 is " << variable_1 << " Variable 2 is " << variable_2 << endl;
	cout << "Sum of two variable is " << sum << endl;
	cout << "Enter your full name ";
	cin >> fullName;
	cout << "Full name is " << fullName;

}