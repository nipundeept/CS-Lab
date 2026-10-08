//To insert a number at a given location in the array
#include <stdio.h>
#include <stdlib.h>

void insert(int, int);
int A[100], n;
int main(void) {
	int i, pos, elem;
	system("clear");
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("A[%d] = ",i);
		scanf("%d", &A[i]);
	}
	
	printf("Enter the position where the element has to be inserted : ");
	scanf("%d", &pos);
	printf("Enter the element to be inserted : ");
	scanf("%d", &elem);
	insert(pos, elem);
	printf("After insertion : \n");
	printf("Size of modified array : %d\n", n);
	printf("Modified array : \n");
	for (i = 0; i < n; i++) {
		printf("%d\t", A[i]);
	}
	printf("\n");
	
	return 0;
}

void insert(int pos, int val) {
	int i;
	i = n - 1;
	while (i >= pos) {
		A[i + 1] = A[i];
		i--;
	}
	A[pos] = val;
	n = n + 1;
}
	
