//To find whether an array of integers contains duplicate integers and display all the positions where the duplicate value exist.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i, j, n, A[100];
	system("clear");
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
	}
	
	printf("Duplicate exists at positions :\n");
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (A[i] == A[j]) {
				printf("%d and %d \n", i + 1, j + 1);
			}
		}
	}
	
	return 0;
}
