#include <stdio.h>
#include <stdlib.h>

void printWelcomeMenu();
void printOptions();
void add();
void sub();

void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);

	switch (inputNum)
	{
	case 1:
		add();
		exit(1);

	case 2:
		sub();
		exit(1);

	}
}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}

void sub() { 

	int num1 = 42;
	int num2 = 0;
	int result;

	result = num1 - num2;

	printf("%d - %d = %d", num1, num2, result);
	

}