//To check whether a number is positive, negative or zero
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the value of n : "; cin >> n;
	if (n > 0) {
		cout << "Number is positive\n";
	}
	else if (n < 0) {
	 	cout << "Number is negative\n";
	}
	else {
		cout << "Number is zero" << endl;
	}
	return 0;
}
	 
