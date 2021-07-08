
#include<iostream>
using namespace std;
int main() {
	/*if, else if, else statement */
	int value1;
	cout << "Enter the value 1 ";
	cin >> value1;
	if (value1 > 0) {
		cout << "Positive \n";
	}
	if (value1 < 0) {
		cout << "negative\n";
	}
	if (value1 == 0) {
		cout << "Non zero\n";
	}
	/*if, else if statement */
	int value2;
	cout << "Enter the value 2 ";
	cout << endl;
	cin >> value2;
	if (value2 > 0) {
		cout << "Positive\n";
	}
	else if (value2 < 0) {
		cout << "negative\n";
	}
	else if (value2 == 0) {
		cout << "Non zero\n";
	}

	/*Logical operator using if else statement*/
	int value3;
	cout << "Enter the value 3 ";
	cin >> value3;
	if (value3 > 90) {
		cout << "You have got A\n";
	}
	else if (value3 <= 90 && value3 >= 80) {
		cout << "You have got B\n";
	}
	else {
		cout << "Rest of the grade\n";
	}
		
	/*Vowel & Consonant , Uppercase , Lowercase*/
	char ch;
	cout << "Enter any character";
	cin >> ch;
	ch = tolower(ch); 
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		cout << "Vowel\n";
	}
	else {
		cout << "Consonant\n";
	}

	/*Nested if*/ 
	int value4, value5;
	cout << "Enter value 4 ";
	cin >> value4;
	if (value4 > 0) {
		cout << "Enter value 5 ";
		cin >> value5;
		if (value5 > 0) {
			cout << "You have entered in nested if";
		}
		else {
			cout << "You have entered in nested if with negative value";
		}
	}
	else
	{
		cout << "You are out of nested if" ;
	}
	cout << endl;
	/*Switchcase*/
	char grade;
	cout << "Enter your grade ";
	cin >> grade;
	grade = toupper(grade);
	switch (grade)
	{
	case 'A' : cout << "You mark is greater than 90";
			break;
	case 'B' : cout << "Your mark is between 80 to 90";
			break;
	default: cout << "Rest of the grade";
	}
}