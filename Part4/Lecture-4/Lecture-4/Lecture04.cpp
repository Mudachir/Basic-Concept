#include<iostream>
using namespace std;
int main() {
	/*for ,while, do-while loop*/
	for (int i = 0; i < 10; i++) {
		cout << "Bangladesh\n";
	}

	int value = 1;
	while (value <= 20) {
		cout << "Brazil\n";
		value++;
	}
	int value2 = 1;
	do {
		cout << value2 << "\n";
		value2++;
	} while (value2 <= 10);
	cout << "End of the loop";
}