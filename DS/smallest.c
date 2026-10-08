//To find the minimum element in the list of integers
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n, A[100], i, min;
	system("clear");
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("A[%d] = ",i);
		scanf("%d", &A[i]);
	}
	
	min = A[0];
	for (i = 1; i < n; i++) {
		if (A[i] < min) {
			min = A[i];
		}
	}
	
	printf ("The smallest element in the array is : %d\n", min);
	return 0;
}
		
