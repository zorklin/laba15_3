#include <stdio.h>

int main() {

	//типізація даних масив на 10 елементів і зміна для циклу
	int array[10], i;

	//вивести дані про те що потрібно зробити користувачу
	printf("Enter 10 number:\n");


	//ввід десяти єлементів масиву
	for (i = 0; i < 10; i++) {

		scanf_s("%d", &array[i]);

	}

	//обнулення парних єлементів (елементи масиву номер 2, 4, 6... будуть замінені на нулі)
	for (i = 0; i < 10; i++) {

		if ((i + 1) % 2 == 0) {

			array[i] = 0;

		}

	}

	// Вивід елементів масиву
	for (i = 0; i < 10; i++) {

		printf("%d", array[i]);

	}

	//повернути 0
	return 0;
}