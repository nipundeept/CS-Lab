#include <stdio.h>

//function to concat the 2nd string to the end of first

void StrCat(char *PS1, char *PS2) {
	//move ps1 to the end of the first string
	while(*PS1 != '\0') {
		PS1++;
	}
	
	//copy characters from PS2 to the end of PS3
	
	while (*PS2 != '\0') {
		*PS1 = *PS2;
		PS1++; PS2++;
	}
	//add the null terminator to the end of the concatenated string
	
	*PS1 = '\0';
}

int main() {
	char str1[100], str2[50];
	
	char *PS1 = str1; char *PS2 = str2;
	printf("Enter the first string : ");
}
