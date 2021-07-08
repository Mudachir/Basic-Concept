#include <iostream>
using namespace std;
int main() {
	/*Basic concept of pointer*/
	// * this symbol known as pointer
	// & this symbol known as reference 
	int x = 10;
	int* p;
	p = &x; // memory address
	cout << "x = " << x;
	cout << endl;
	cout << "&x = " << &x;
	cout << endl;
	cout << "p = " << p;
	cout << endl;
	cout << "p = " << *p;
	cout << endl;

}