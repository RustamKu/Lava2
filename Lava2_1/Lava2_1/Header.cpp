#include <iostream>
#include "Header.h"
void Increase() {
	int b, j;
	std::cout << "Enter array size ";
	int size;
	std::cin >> size;
	int *arr = new int[size];
	std::cout << " Enter array ";
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 1; i < size; i++) {
		b = arr[i];
		j = i;
		while (j > 0 && arr[j - 1] > b)
		{
			arr[j] = arr[j - 1];
			j = j - 1;
		}
		arr[j] = b;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
};

void descending() {
	int b, j;
	std::cout << "Enter array size ";
	int size;
	std::cin >> size;
	int *arr = new int[size];
	std::cout << " Enter array ";
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 1; i < size; i++) {
		b = arr[i];
		j = i;
		while (j > 0 && arr[j - 1] < b)
		{
			arr[j] = arr[j - 1];
			j = j - 1;
		}
		arr[j] = b;
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}
