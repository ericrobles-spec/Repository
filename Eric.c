#include <stdio.h>

int main() {
	int day;
	int month;
	int year;

	printf("What's your birth date?\n");
	scanf_s("%d", &day);

	printf("What's your month?\n");
	scanf_s("%d", &month);

	printf("Wich year were you born? (4 nums)\n");
	scanf_s("%d", &year);

	int suma = day + month + year;
	printf("%d", &suma);
}