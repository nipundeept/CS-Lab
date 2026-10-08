//To delete an element from the specified position in an input array

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, A[100], i, pos;
	system("clear");
	printf("Enter the number of elements in array : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("A[%d] = ",i);
		scanf("%d", &A[i]);
	}
	printf("Enter the position to process the deletion : ");
	scanf("%d", &pos);
	if (pos >= n || pos < 0) {
		printf("Invalid positon entered.\n");
		return 0;
	}
	
	for (i = pos; i < n - 1; i++) {
		A[i] = A[i + 1]; //shifting the right contents of the array towards left starting from the position
	}
	n = n - 1; //size decreases after deletion
	
	//displaying the contents of the updated array after operation
	printf("Displaying modified array contents :- \n");
	printf("Size of the modified array : %d\n", n);
	for (i = 0; i  < n; i++) {
		printf("%d\n", A[i]);
	}
	
	return 0;
}

	
