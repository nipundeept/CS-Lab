//To input two integer arrays and merge their contents in a different array

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A[100], B[100], C[200], x, y, z, k, i;
	system("clear");
	printf("Enter the number of elements in array A: ");
	scanf("%d", &x);
	for (i = 0; i < x; i++) {
		printf("A[%d] = ",i);
		scanf("%d", &A[i]);
	}
	printf("Enter the number of elements in array B: ");
	scanf("%d", &y);
	for (i = 0; i < y; i++) {
		printf("B[%d] = ",i);
		scanf("%d", &B[i]);
	}
	
	z = x + y; // size of third array
	k = 0;
	for (i = 0; i < x; i++) {
		C[k++] = A[i];
	}
	for (i = 0; i < y; i++) {
		C[k++] = B[i];
	}
	printf("\nAfter merging arrays A and B, the contents of the array are : \n");
	printf("Size of array C : %d\n", z);
	for (i = 0; i < z; i++) {
		printf("%d\n", C[i]);
	}
	
	return 0;
}
