#include<iostream>
#include<manipulations.h>
#include<iomanip>
using namespace std;
int main() {
	//arithmetic expression
	int num1, num2;
	cout << "Enter num1 ";
	cin >> num1;
	cout << "Enter num2 ";
	cin >> num2;
	int sum = num1 + num2;
	int sub = num1 - num2;
	int multiple = num1 * num2;
	int division = num1 / num2;
	int remainder = num1 % num2;

	cout << "Sum is " << sum << " Sub is " << sub << " Multiple is " << multiple << " Division is " << division
		<< "Remainder is " << remainder << endl;

	/* formatting output
	* showpoint
	* noshowpoint
	* setprecision -> to set total digit before & after decimal
	* fixed -> to set digit after decimal point
	* setw()  -> to maintain spacing
	*/
	float num3, num4;
	cout << "Enter num1 ";
	cin >> num3;
	cout << "Enter num2 ";
	cin >> num4;
	float sum1 = num3 + num4;
	cout << showpoint;
	cout << fixed;
	cout << setprecision(2);
	cout <<setw(-10) << "Sum is " << sum1;
	cout << endl;

	float sub1 = num3 - num4;
	//cout << noshowpoint;
	cout << setw(-10) << " Sub is " << sub1 ;
	cout << endl;
	
	float multiple1 = num3 * num4;
	cout << setw(-10) << " Multiple is " << multiple1;
	cout << endl;
	float division1 = num3 / num4;
	cout << setw(-10) << " Division is " << division1;
	cout << endl;
	

	/*Assignment operator*/
	int x = 6, y = 7;
	x += y; // x = x + y

	/*Unary operator*/
	int i = 5;
	++i;
	cout << "Post increment " << i;
	cout << endl;
	int j = 5;
	int temp = j++;
	cout << "Temp value " << temp;
	cout << endl;
	cout << "After increment" << j;
	cout << endl;
	/*Special operator*/
	int a;
	char name[20];
	int c = sizeof(name);
	cout << c;
	cout << endl;




}