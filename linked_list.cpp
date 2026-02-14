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
		while (current != NULL) {
			std::cout << current->value << '\n';
			current = current->next;
		}
	}
}

int main() {
	int n;
	std::cout << "Amount of items: ";
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		int data;
		std::cout << "Item " << i << ": ";
		std::cin >> data;
		append(data);
	}
	display();
	return 0;
}
