//Program to find the mean of n numbers stored in an array
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, A[100], i, sum;
	float mean;
	sum = 0; mean = 0.0f;
	system("clear");
	printf("Enter the number of elements in the array : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf("%d", &A[i]);
		sum += A[i];
	}
	
	mean = sum / (int)n;
	printf("Mean of %d numbers whose sum is %d is %.2f.\n",n,sum, mean);
	return 0;
}
	 
	
	
