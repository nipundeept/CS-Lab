#include <iostream>

using namespace std;

int main() {
	int votes, candidate;
	int count[6] = {0};
	cout << "Enter the number of votes : "; cin >> votes;
	for (int i = 0; i < votes; i++) {
		cout << "Vote " << (i + 1) << ": "; cin >> candidate;
		if (candidate >= 1 && candidate <= 5) {
			count[candidate - 1]++;
		}
		else 
			count[5]++;
	}
	cout << "\n Vote count :- \n";
	for (int i = 0; i < 5; i++) {
		cout << "Candidate " << i + 1 << ": " << count[i] << " Votes\n";
	}
	cout << "Spoilt ballots : " << count[5] << endl;
	
	return 0;
}  
