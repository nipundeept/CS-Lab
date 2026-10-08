//The daily maximum temperature recorded for 5 cities during the first 6 days of January month have to be tabulated. Write a C++ Program to read the data and find the city and day corresponding to highest and lowest temperature.

#include <iostream>

using namespace std;

int main() {
	const int cities = 5;
	const int days = 6;
	float temp[cities][days];
	float highest, lowest;
	int high[2], low[2]; //[0] stores the city and [1] stores the day for corresponding temperature
	
	cout << "Enter temperature of 5 cities for 6 days : \n";
	for (int i = 0; i < cities; i++) {
		for (int j = 0; j < days; j++) {
			cout << "City "<< i + 1 << ", Day " << j + 1 << " : "; cin >>temp[i][j];
		}
	}
	
	highest = lowest = temp[0][0];
	
	for (int i = 0; i < cities; i++) {
		for (int j = 0; j < days; j++) {
			if (temp[i][j] > highest) {
				highest = temp[i][j];
				high[0] = i;
				high[1] = j;
			}
			if (temp[i][j] < lowest) {
				lowest = temp[i][j];
				low[0] = i;
				low[1] = j;
			}
		}
	}
	
	cout << "\nHighest temperature recorded so far : " << highest << " (City : " << high[0] + 1 << ", Day : " << high[1] +  1 << ")\n";
	cout << "Lowest temperature recorded so far : " << lowest << " (City : " << low[0] + 1 << ", Day : " << low[1] +  1 << ")\n";
	
	return 0;
} 
