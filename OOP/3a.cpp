/* Write a C++ Program to swap 2 values by writing functions for the following :-
i) Call by name / value
ii) Call by pointers and
iii) Call by reference
*/

#include <iostream>

using namespace std;

void display(int, int);

//Call by value
void swap_val(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//Call by pointer
void swap_ptr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

//Call by reference 
void swap_ref(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main(void) {
	int x, y;
	cout << "Enter the value of x : "; cin >> x;
	cout << "Enter the value of y : "; cin >> y;
	cout << "Before swapping :-\n";
	display(x, y);
	cout << "After call by value :-\n";
	swap_val(x, y);
	display(x, y);
	cout << "After call by pointer :-\n";
	swap_ptr(&x, &y);
	display(x, y);
	cout << "After call by reference :-\n";
	swap_ref(x, y);
	display(x, y);
}

void display(int a, int b) {
	cout << "Values of a and b are :\n";
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

 
