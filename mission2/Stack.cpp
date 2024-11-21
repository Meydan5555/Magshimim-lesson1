#include "Stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	if (s->count < s->max)
	{
		IntNode* newNode = new IntNode();
		newNode->val = element;
		s->head = insertAtHead(s->head, newNode);
		s->count++;
	}
}

int pop(Stack* s)
{
	if (s->count == 0)
	{
		return -1;
	}
	s->head = removeAtHead(s->head);
	s->count--;
	return NULL;
}

void initStack(Stack* s)
{
	IntNode* curr;
	s->count = 0;
	s->max = 0;
	while (s->head)
	{
		s->head = removeAtHead(s->head);
	}
}

void cleanStack(Stack* s)
{
	IntNode* curr;
	while (s->head)
	{
		s->head = removeAtHead(s->head);
	}
	delete s;
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
	if (s->count == s->max)
	{
		return true;
	}
	return false;
}