/*
Create 3 pointers called P1, P2, P3 and an integer variable X called P1 where P1 points to P2, P2 points to P3 and P3 points to X. Demonstrate how to read and retrieve the value of X using P1, P2, and P3. 
*/

#include <stdio.h>

int main() {
	int X = 100;
	//P3 points to an integer(X)
	int *P3;
	//P2 points to a pointer to an integer
	int **P2;
	//P1 points to a pointer to pointer to an integer
	int ***P1;
	//Now we establish the pointer chain
	P3 = &X; //P3 points to the address of X
	P2 = &P3; //P2 points to the address of P3
	P1 = &P2; //P1 points to the address of P2
	//Retrieve the value of X using the pointer chain
	int retrieved_x= ***P1;
	//print the values
	printf("The value of X is : %d\n", X);
	printf("The value of X retrieved using pointers is : %d\n", retrieved_x);
	
	return 0;
}
