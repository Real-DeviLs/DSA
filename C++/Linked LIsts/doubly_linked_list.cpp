#include <iostream>
#include<cstdio>

using namespace std;

struct Node { 
	int data; 
	struct Node* next; 
	struct Node* prev; 
}; 


void printList(struct Node* head) 
{ 
	struct Node* ptr; 
	printf("\nTraversal in forward direction \n"); 
	while (head != NULL) { 
		printf(" %d ", head->data); 
		ptr = head; 
		head = head->next; 
	} 

	printf("\nTraversal in reverse direction \n"); 
	while (ptr != NULL) { 
		printf(" %d ", ptr->data); 
		ptr = ptr->prev; 
	} 
} 


int main() 
{ 

    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));
    fourth = (struct Node *) malloc (sizeof(struct Node));

    head->data = 1;
    head->prev = NULL;
    head->next = second;

    second->data = 5;
    second->prev = head;
    second->next = third;

    third->data = 8;
    third->prev = second;
    third->next = fourth;

    fourth->data = 10;
    fourth->prev = third;
    fourth->next = NULL;

	cout<<"Double Linked List : \n"; 
	printList(head); 

	return 0; 
} 
