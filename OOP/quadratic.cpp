#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	double a, b, c, discriminant, root1, root2, realPart, imagPart;
	cout << "Enter the coefficients of a, b and c : ";
	cin >> a >> b >> c;
	discriminant = (b * b) - 4 * a * c;
	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Root are real and distinct." << endl;
		cout << "Root 1 = " << root1 << endl << "Root 2 = " << root2 << endl;
	}
	else if (discriminant == 0) {
		root1 = -b / (2 * a);
		cout << "Roots are real and equal." << endl;
		cout << "Root1 = Root2 = " << root1 << endl;
	}
	else {
		realPart = -b / (2 * a);
		imagPart = sqrt(-discriminant) / (2 * a);
		cout << "Roots are complex and different." << endl;
		cout << "Root1 = " << realPart << "+" << imagPart << "i" << endl;
		cout << "Root1 = " << realPart << "-" << imagPart << "i" << endl;
	}
	return 0;
}
