#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* temp = new Stack();
	temp->head = NULL;
	temp->count = 0;
	for (i = 0; i < size; i++)
	{
		push(temp, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(temp);
	}
	cleanStack(temp);
}

int* reverse10()
{
	int i = 0, len = 10;
	int* numbers = new int[len];
	std::cout << "Enter 10 numbers: ";
	for (i = 0; i < len; i++)
	{
		std::cin >> numbers[i];
	}
	Stack* temp = new Stack();
	temp->head = NULL;
	temp->count = 0;
	for (i = 0; i < len; i++)
	{
		push(temp, numbers[i]);
	}
	for (i = 0; i < len; i++)
	{
		numbers[i] = pop(temp);
	}
	cleanStack(temp);
	return numbers;
}