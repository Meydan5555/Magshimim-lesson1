#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct IntNode
{
	unsigned int val;
	struct IntNode* next;
} IntNode;

IntNode* insertAtHead(IntNode* head, IntNode* newNode);
IntNode* removeAtHead(IntNode* head);
IntNode* initNode(int value);

#endif