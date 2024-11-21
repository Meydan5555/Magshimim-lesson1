#include "Stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	s->head = insertAtHead(s->head, initNode(element));
	s->count++;
}

int pop(Stack* s)
{
	if (s->count == 0)
	{
		return -1;
	}
	int val = s->head->val;
	s->head = removeAtHead(s->head);
	s->count--;
	return val;
}

void initStack(Stack* s)
{
	s->count = 0;
	s->head = NULL;
}

void cleanStack(Stack* s)
{
	IntNode* curr = s->head;
	IntNode* temp = NULL;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		delete temp;
	}
}

bool isEmpty(Stack* s)
{
	if (s->count == 0)
	{
		return true;
	}
	return false;
}

bool isFull(Stack* s)
{
	return false;
}