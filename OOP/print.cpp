#include <iostream>
using namespace std;
void display(int n);
int main() {
	int n;
	cout << "Enter the value of n : "; cin >> n;
	display(n);
	return 0;
}

void display(int n){
	if (n == 0) { //base condition
		return;
	}
	display(n - 1); //recursive call
	cout << n << endl;
	return;
}
