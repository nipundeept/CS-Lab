#include <iostream>
using namespace std;
int factorial(int);
int main() {
	int n, fact;
	cout << "Enter the value of n : "; cin >> n;
	fact = factorial(n);
	cout << "Factorial of " << n << " is : " << fact << endl;
	return 0;
}
int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
} 
