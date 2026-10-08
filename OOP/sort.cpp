#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number of elements : ";
	cin >> n;
	int arr[n];
	cout << "Enter " << n << " elements : \n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//Bubble sort 
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "\nElements in ascending order : ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nElements in descending order : ";
	for (int i = n - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	
	return 0;
}



	
