//Swap two problems
#include <iostream>
using namespace std;
int main () {
	int a, b, temp;
	cout << "Enter a : "; cin >> a;
	cout << "Enter b : "; cin >> b;
	cout <<"\nBefore swap: " << endl;
	cout << "Value of a : " << a << endl;
	cout << "Value of b : " << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout <<"\n After swap: " << endl;
	cout << "Value of a : " << a << endl;
	cout << "Value of b : " << b << endl;
	return 0;
}
