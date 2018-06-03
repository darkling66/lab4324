// lab4234.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define SIZE 1

int main()
{
	srand(time(NULL));
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 101 - 50;
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}