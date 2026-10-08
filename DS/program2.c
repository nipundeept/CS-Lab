/*
Define a structure called Student with the members. Name, Reg_No, marks in 3 test and average_marks. Develop a menu driven program to perform the following by writing separate functions for each operation. 
a) Read info of N students
b) Display student's information
c) To calculate the average of best two test marks of each students. Note: Allocate memory dynamically
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
	char name[50];
	int reg_no;
	float marks[3];
	float avg_marks;
};

//Function to read student info
void readStudents(struct Student* p, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		printf("Enter the details of student %d :\n", (i + 1));
		printf("Name : ");
		scanf("%s", (p + i) -> name);
		printf("Enter register number :");
		scanf("%d", &(p + i) -> reg_no);
		printf("Enter the marks in 3 tests.\n");
		for (j = 0; j < 3; j++) {
			printf("Test %d :", j + 1);
			scanf("%f", &(p + i) -> marks[j]);
		}
		
		(p + i) -> avg_marks = 0;
	}
}

//Function to calculate average of best two marks

void calculateAverage(struct Student *p, int n) {
	
	int i;
	float m1, m2, m3, sum;
	for (i = 0; i < n; i++) {
		m1 = (p + i) -> marks[0];
		m2 = (p + i) -> marks[1];
		m3 = (p + i) -> marks[2];
		
		if (m1 <= m2 && m1 <= m3) {
			sum = m2 + m3;
		}
		else if (m2 <= m3 && m2 <= m1) {
			sum = m1 + m3;
		}
		else {
			sum = m1 + m2;
		}
		(p + i) -> avg_marks = sum / 2;
	}
}

//Function to display student info

void displayStudents(struct Student *p, int n) {
	int i;
	printf("\n -------------STUDENT INFORMATION-------------\n");
	
	for (i = 0; i < n; i++) {
		printf("\n Student %d\n", i + 1);
		printf("Name : %s\n", (p + i) -> name);
		printf("Registration Number : %d\n", (p + i) -> reg_no);
		printf("Test 1 Marks : %.2f\n", (p + i) -> marks[0]);
		printf("Test 2 Marks : %.2f\n", (p + i) -> marks[1]);
		printf("Test 3 Marks : %.2f\n", (p + i) -> marks[2]);
		printf("Average marks (best of two) : %.2f\n", (p + i) -> avg_marks);
	}
}

int main() {
	struct Student *p;
	int n, choice;
	
	system("clear");
	
	printf("Enter the number of students :");
	scanf("%d", &n);
	p = (struct Student*)malloc(n * sizeof(struct Student));
	
	if (p == NULL) {
		printf("Memory allocation failed!");
		return 1;
	}
	
	do {
		printf("\n===============MENU===============\n");
		printf("1. Read student information.\n");
		printf("2. Calculate the average of best two test marks.\n");
		printf("3. Display student information.\n");
		printf("4. Exit\n\n");
		printf("Enter your choice :");
		scanf("%d", &choice);
		
		switch(choice) {
			case 1 :
				readStudents(p, n);
			break;
			
			case 2 : 
				calculateAverage(p, n);
				printf("Average calculated successfully!\n");
			break;
			
			case 3 :
				displayStudents(p, n);
			break;
			
			case 4 :
				printf("\nExiting program!\n");
			break;
			
			default :
				printf("Invalid choice entered!\n");
		}
	} while(choice != 4);
	
	return 0;

}
