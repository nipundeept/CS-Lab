#include <iostream>
using namespace std;

int ncr(int, int); 

int main() {
	int n, r;
	cout << "Enter the value of n : "; cin >> n;
	cout << "Enter the value of r : "; cin >> r;
	cout << "Value of " << n << "C" << r << " is : " << ncr(n, r) << endl;
}

int ncr(int n, int r) {
	//Base condition 
	if (r == 0 || r == n) return 1;
	if (r == 1) return n;
	
	int leftCall = ncr(n - 1, r);
	int rightCall = ncr(n - 1, r - 1);
	
	return leftCall + rightCall;
}
