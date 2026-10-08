//Create a pointer to a two dimensional array of integer. Write functions Read(P) and Display(P) to read and display the contents using pointers

#include <stdio.h>

#define ROWS 3
#define COLS 4

//Function to read contents into 2D array using pointers

void Read(int(*p)[COLS]) {
	printf("Enter %dx%d integer values : ", ROWS, COLS);
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			//Access elements using pointer arithmetic
			scanf("%d", (*(p + i) + j));
		}
	}
}

//Function to display contents of 2D array using a pointer

void Display(int(*p)[COLS]) {
	printf("\n Contents of the 2D array : \n");
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			//Access elements using pointer arithmetic
			printf("%d\t", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main() {
	int arr[ROWS][COLS];
	
	int (*ptr_to_array)[COLS];
	ptr_to_array = arr;
	Read(ptr_to_array);
	Display(ptr_to_array);
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
