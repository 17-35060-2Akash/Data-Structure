
#include <iostream>

using namespace std;

struct node
{
	int data;
	node *prev;
	node *next;
};

node *head = NULL;
node *tail = NULL;

void insert(int x)
{
	if (head == NULL) {
		head = new node;
		head->data = x;
		head->prev = NULL;
		head->next = NULL;
		tail = head;
	}
	else {
		node *curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}

		curr->next = new node;
		(curr->next)->data = x;
		(curr->next)->prev = curr->next;
		(curr->next)->next = NULL;

		tail = curr->next;
	}
}

int main() { int x;

	for (int i = 0; i < 10; i++)
		insert(x);

	node *curr = head;

	while (curr != NULL)
	{
		cout << curr->data << " ";
		curr = curr->next;
	}

	return 0;
}
