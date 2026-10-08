//To insert a number in a array that is already sorted in ascending order (Insert by value)

#include <stdio.h>
#include <stdlib.h>

int checkSorted(int[], int);
int main(void) {
	int n, A[100], i, val, pos;
	system("clear");
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("A[%d] = ",i);
		scanf("%d", &A[i]);
	}
	
	if (checkSorted(A, n)) {
		printf("The array contents are not sorted\n");
		return 0;
	}
	
	printf("Enter the value to be inserted : ");
	scanf("%d", &val);
	pos = -1;
	for (i = 0; i < n; i++) {
		if (val >= A[i]) {
			pos = i;
		}
		else {
			break;
		}
	}
	
	pos++;
	i = n - 1;
	while (i >= pos) {
		A[i + 1] = A[i];
		i--;
	}
	A[pos] = val;
	n++;
	
	printf("After insertion :-\n");
	printf("Size of array : %d\n", n);
	printf("Contents of the array after modifications :\n");
	for (i = 0; i < n; i++) {
		printf("%d\n", A[i]);
	}
	
	return 0;	
}

int checkSorted(int A[100], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		if (A[i + 1] < A[i]) {
			return -1;
		}
	}
	return 0;
} 
