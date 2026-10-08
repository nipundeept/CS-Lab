//Create a pointer to an integer array and pass this as parameter to a function called reverse which reverses the array contents using pointers. Write different functions called Read(P) to read the array elements using pointer P and Display(P) to display the array contents using P before and after reverse

#include <stdio.h>
#include <stdlib.h>

//Function to read array elements usin a pointer
void Read(int *p, int size) {
	printf("Enter %d integer elements : ", size);
	for (int i = 0; i < size; i++) {	
		scanf("%d", (p + i));
	}
}

//Function to display the array contents using pointers

void Display(int *p, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
}

//Function to reverse array contents using pointers

void Reverse(int *p, int size) {
	int *start = p;

	int* end = p + size - 1;
	while(start <= end) {
		printf("%p\n", start);
		printf("%p\n", end);
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main() {
	int arr, size;
	printf("Enter array size : ");
	scanf("%d", &size);
	int *arr_ptr = (int *)malloc(size * sizeof(int)); //Dynamically allocate memory
	if (arr_ptr == NULL) {
		printf("Memory location failed!");
		return 1;
	}
	
	//read elements
	Read(arr_ptr, size);
	printf("Before reverse : \n");
	Display(arr_ptr, size);
	Reverse(arr_ptr, size);
	printf("Array after reverse :\n");
	Display(arr_ptr, size);
	free(arr_ptr); arr_ptr = NULL;
	
	return 0;
}
	
