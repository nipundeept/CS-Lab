//To input two numbers and display the largerst among them
#include <iostream>
using namespace std;
int main() {
	int a, b, largest;
	cout << "Enter the value of a : "; cin >> a;
	cout << "Enter the value of b : "; cin >> b;
	if (a > b)
		largest = a;
	else
		largest = b;
	cout << "Largest of " << a << " and " << b << " is: " << largest << endl;
	return 0;
}
