#include <iostream>
using namespace std;

class Node {
public:
	int value;
	Node* next;
};

Node* head = NULL;

bool empty_list() {
	return head == NULL;
}

void add_back(int data) {

	Node* new_node = new Node;
	new_node->value = data;
	new_node->next = NULL;
	Node* ptr = head;

	if (head == NULL) {
		head = new_node;
	}
	else {
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
}

void add_front(int data) {

	Node* new_node = new Node;
	new_node->value = data;

	if (head == NULL) {

		head = new_node;
		new_node->next = NULL;

	}
	else {

		new_node->next = head;
		head = new_node;

	}
}

int new_node_value_after;
void add_after_value(int data) {
	Node* current = head;

	while (current != NULL && current->value != data) {
		current = current->next;
	}
	if (current == NULL) {
		cout << "Item does not exist\n";
		return;

	}
	Node* new_node = new Node;
	new_node->value = new_node_value_after;
	new_node->next = current->next;
	current->next = new_node;
}

int new_node_value_before;
void add_before_value(int data) {
	Node* current = head;
	Node* previous = head;
	while (current != NULL && current->value != data) {
		previous = current;
		current = current->next;
	}
	if (current == NULL) {
		cout << "Item does not exist\n";
		return;
	}

	Node* new_node = new Node;
	new_node->value = new_node_value_before;
	if (current == head) {
		new_node->next = current;
		head = new_node;
	}
	else {
		new_node->next = previous->next;
		previous->next = new_node;
	}
}

void remove_front() {

	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* current = head;
		head = head->next;
		delete current;
	}
}

void remove_back() {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* current = head;
		Node* previous = head;
		if (current->next == NULL) {
			head = NULL;
			delete current;
			return;
		}
		else {
			while (current->next != NULL) {
				previous = current;
				current = current->next;
			}
		}
		previous->next = NULL;
		delete current;
	}
}

void remove_value(int data) {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* current = head;
		Node* previous = head;
		if (current->value == data) {
			head = head->next;
			delete current;
		}
		else {
			while (current != NULL && current->value != data) {
				previous = current;
				current = current->next;
			}
			if (current == NULL) {
				cout << "Item does not exist";
			}
			else {
				previous->next = current->next;
				delete current;
			}
		}

	}
}

int index_get_index_by_value;
void get_index_by_value(int data) {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		index_get_index_by_value = 0;
		Node* current = head;
		while (current != NULL && current->value != data) {
			current = current->next;
			index_get_index_by_value++;
		}
		if (current == NULL) {
			cout << "Item does not exist\n";
			return;
		}
		cout << "Index: " << index_get_index_by_value;
	}
}

int index_get_value_by_index;
void get_value_by_index(int data) {

	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		index_get_value_by_index = 0;
		Node* current = head;
		while (current != NULL && index_get_value_by_index != data) {
			current = current->next;
			index_get_value_by_index++;
		}
		if (current == NULL) {
			cout << "Invalid Index\n";
			return;
		}
		cout << "Item: " << current->value;
	}
}

void remove_value_by_index(int data) {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		int index_remove_value_by_index;
		Node* current = head;
		Node* previous = head;
		index_remove_value_by_index = 0;

		if (data == 0) {
			head = head->next;
			delete previous;
			return;
		}

		while (current != NULL && index_remove_value_by_index != data) {
			previous = current;
			current = current->next;
			index_remove_value_by_index++;
		}
		if (current == NULL) {
			cout << "Invalid Index\n";
			return;
		}
		previous->next = current->next;
		delete current;

	}
}

void remove_all() {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* current = head;
		Node* previous = head;
		while (current != NULL) {
			previous = current;
			current = current->next;
			delete previous;
		}
	}
	head = NULL;
}

void display() {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* current = head;
		while (current != NULL) {
			cout << current->value << '\n';
			current = current->next;
		}
	}
}

void list_size() {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* ptr = head;
		int i = 0;
		while (ptr != NULL) {
			i++;
			ptr = ptr->next;
		}
		cout << "Size: " << i << '\n';
	}
}

int main() {
	cout << "---------------- Singly Linked List Editor ----------------\n";
	cout << "Create your linked list:\nChoose mode: \'i\'nsert or \'a\'ppend? ";
	char iORa;
	cin >> iORa;
	switch (iORa) {
	case 'i': {
		cout << "\nAmount of items: ";
		int amount;
		int item;
		cin >> amount;
		for (int i = 0; i < amount; i++) {
			cout << "Item " << i + 1 << ": ";
			cin >> item;
			add_front(item);
		}
		cout << "\n-----------------------\nList:\n";
		display();
		break;
	}


	case 'a': {
		cout << "\nAmount of items: ";
		int amount;
		int item;
		cin >> amount;
		for (int i = 0; i < amount; i++) {
			cout << "Item " << i + 1 << ": ";
			cin >> item;
			add_back(item);
		}
		cout << "\n-----------------------\nList:\n";
		display();
		break;
	}

	default: {
		cout << "Invalid\n";
		remove_all();
		return 0;
	}
	}
	do {
		cout << "\nAdjustments? (y/n) ";
		char adjustments;
		cin >> adjustments;
		switch (adjustments) {
		case 'y': {
			cout << "\nChoose the adjustment: \n1-insert\n2-append\n3-append after value\n4-insert before a value\n5-remove front\n6-remove back\n7-remove value\n8-remove by index\n9-get index by value\n10-get value by index\n11-clear the list\n12-display list\n13-display size\n";
			int decision;
			cin >> decision;
			switch (decision) {

			case 1: {
				int item;
				cout << "\nItem value (inserting): ";
				cin >> item;
				add_front(item);
				cout << "\n-------------------------\nList after adjustment: \n";
				display();

				break;
			}

			case 2: {
				int item;
				cout << "\nItem value (appending): ";
				cin >> item;
				add_back(item);
				cout << "\n-------------------------\nList after adjustment: \n";
				display();

				break;
			}

			case 3: {
				int value;
				cout << "\n---------------------\nList:\n";
				display();
				cout << "\nEnter the value to add after: ";
				cin >> value;
				cout << "\nEnter the value (appending): ";
				cin >> new_node_value_after;
				add_after_value(value);
				cout << "\n-------------------------\nList after adjustment: \n";
				display();

				break;
			}

			case 4: {
				int value;
				cout << "\n---------------------\nList:\n";
				display();
				cout << "\nEnter the value to add before: ";
				cin >> value;
				cout << "\nEnter the value (inserting): ";
				cin >> new_node_value_before;
				add_before_value(value);
				cout << "\n-------------------------\nList after adjustment: \n";
				display();

				break;
			}

			case 5: {
				remove_front();
				cout << "\n-------------------------\nList after adjustment: \n";
				display();

				break;
			}

			case 6: {
				remove_back();
				cout << "\n-------------------------\nList after adjustment: \n";
				display();

				break;
			}

			case 7: {
				int value;
				cout << "\n---------------------\nList:\n";
				display();
				cout << "\nEnter the value (removing): ";
				cin >> value;
				remove_value(value);
				cout << "\n-------------------------\nList after adjustment: \n";
				display();

				break;
			}

			case 8: {
				cout << "\n---------------------\nList:\n";
				display();
				cout << "Index (removing): ";
				int index;
				cin >> index;
				remove_value_by_index(index);
				cout << "\n-------------------------\nList after adjustment: \n";
				display();

				break;
			}

			case 9: {
				cout << "\n---------------------\nList:\n";
				display();
				cout << "\nValue: ";
				int value;
				cin >> value;
				get_index_by_value(value);

				break;
			}

			case 10: {
				cout << "\n---------------------\nList:\n";
				display();
				cout << "\nIndex: ";
				int index;
				cin >> index;
				get_value_by_index(index);

				break;
			}

			case 11: {
				remove_all();
				cout << "\n-------------------------\nList after adjustment: \n";
				display();

				break;
			}

			case 12: {
				cout << "\n-----------------------\nList:\n";
				display();

				break;
			}

			case 13: {
				list_size();
				break;
			}

			default: {
				cout << "Invalid\n";
				remove_all();
				return 0;
			}

			}
			break;
		}
		case 'n': {
			remove_all();
			return 0;
		}
		default: {
			cout << "Invalid\n";
			remove_all();
			return 0;
		}
		}
	} while (true);
	remove_all();
	return 0;
}
