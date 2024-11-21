#include "LinkedList.h"
#include <iostream>

IntNode* insertAtHead(IntNode* head, IntNode* newNode)
{
	if (head == NULL)
	{
		return newNode;
	}
	newNode->next = head;
	return newNode;
}

IntNode* removeAtHead(IntNode* head)
{
	if (head == NULL)
	{
		return NULL;
	}
	IntNode* send = head->next;
	delete head;
	return send;
}

IntNode* initNode(int value) 
{
	IntNode* node = new IntNode();
	node->val = value;
	node->next = NULL;
	return node;
}