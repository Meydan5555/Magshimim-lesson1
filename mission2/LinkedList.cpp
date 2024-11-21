#include "LinkedList.h"
#include <iostream>

IntNode* insertAtHead(IntNode* head, IntNode* newNode)
{
	newNode->next = head;
	return newNode;
}


IntNode* removeAtHead(IntNode* head)
{
	IntNode* send = head->next;
	delete head;
	return send;
}