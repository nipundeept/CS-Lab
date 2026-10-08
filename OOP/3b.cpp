/* Define a Cube class and write a C++ program to read the side for three cubes and print their volume and outer area */

#include <iostream>

using namespace std;

class Cube {
	double side;
	public :
		void read() {
			cout << "Enter the side of the cube : "; cin >> side;
		}
		double volume() { return side * side * side; }
		double surfaceArea() { return 6 * side * side; }
};

int main() {
	Cube c[3];
	for (int i = 0; i < 3; i++) {
		cout << "\nCube " << i + 1 << ": "; c[i].read();
		cout << "Volume = " << c[i].volume() << endl;
		cout << "Surface Area = " << c[i].surfaceArea() << endl;
	}
	
	return 0;
}
