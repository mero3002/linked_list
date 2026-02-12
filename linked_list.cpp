#include <iostream>

struct Node {
	int value;
	Node* next;
};

Node* head = NULL;

void append(int data) {
	Node* new_node = new Node;
	new_node->value = data;
	new_node->next = NULL;
	Node* last = head;
	if (head == NULL) {
		head = new_node;
	}
	else {
		while (last->next != NULL) {
			last = last->next;
		}
		last->next = new_node;
	}
}

void display() {
	Node* current = head;
	if (head == NULL) {
		std::cout << "This List is Empty" << '\n';
	}
	else {
		while (current->next != NULL) {
			std::cout << current->value << '\n';
			current = current->next;
		}
	}
}

int main() {
	append(1);
	append(2);
	append(3);
	append(4);
	append(5);
	append(6);
	append(7);

	display();
	return 0;
}