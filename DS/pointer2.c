//Create  a pointer to an integer array, read and display the contents using pointer and also display the contents in reverse order using pointers

#include <stdio.h>

int main() {
	int arr[5]; //Declaring an array of size 5
	int* ptr;
	//Assign the base address of the array to the pointer
	ptr = arr;
	//Read the elements of the array using pointer
	printf("Enter 5 integer elements : \n");
	for (int i = 0; i < 5; i++) {
		printf("Element %d : ", i + 1);
		scanf("%d", (ptr + i)); //use pointers to access the array indices
	}
	//Display contents of the array using the pointer
	printf("\nElements in normal order :\n");
	for (int i = 0; i < 5; i++) {
		printf("%d ",*(ptr + i)); //Dereferencing the pointer to access the values
	}
	printf("\n");
	//Displaying the contents in the reverse order using the pointer arithmetic
	for (int i = 4; i >= 0; --i) {
		printf("%d ", *(ptr + i));
	}
	printf("\n");
	
	return 0;
}
