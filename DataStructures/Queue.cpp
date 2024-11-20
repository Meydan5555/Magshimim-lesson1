#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	q->elements = new int[size];
	q->maxSize = size;
	q->count = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->elements;
	q->elements = NULL;
}

void enqueue(Queue* q, unsigned int newValue)
{
	int i = 0;
	if (q->count < q->maxSize)
	{
		q->count++;
		for (i = 0; i < q->count; i++)
		{
			if (i == q->count - 1)
			{
				q->elements[i] = newValue;
			}
		}
	}
}

int dequeue(Queue* q)
{
	int i = 0, out = 0;

	if (q->elements[0] == NULL)
	{
		return -1;
	}
	out = q->elements[0];
	for (i = 0; i < q->count - 1; i++)
	{
		q->elements[i] = q->elements[i + 1];
	}
	q->elements[i] = 0;
	q->count--;
	return out;
}

bool isEmpty(Queue* s)
{
	if (s->count == 0)
	{
		return true;
	}
	return false;
}

bool isFull(Queue* s)
{
	if (s->count == s->maxSize)
	{
		return true;
	}
	return false;
}