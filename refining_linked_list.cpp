#include <iostream>

using namespace std;

class Node {
public:
	int value;
	Node* next;
};

Node* head = NULL;

void add_end(int data) {
	Node* append_node = new Node;
	append_node->value = data;
	append_node->next = NULL;
	Node* last = head;

	if (head == NULL) {
		head = append_node;
	}

	else {
		while (last->next != NULL) {
			last = last->next;
		}
		last->next = append_node;
	}
}

void add_front(int data) {
	Node* insert_node = new Node;
	insert_node->value = data;
	insert_node->next = head;
	head = insert_node;
	Node* first = head;
}

bool green_light = true;

void remove(int data) {
	Node* current = head;
	Node* previous = head;


	if (current->value == data) {
		head = current->next;
		free(current);
		return;
	}

	else {
		while (current->value != data) {
			previous = current;
			current = current->next;
			if (current == NULL) {
				cout << "Item does not exist!\n";
				green_light = false;
				break;
			}
		}
		if (green_light) {
			previous->next = current->next;
			delete(current);
		}
	}
}



void display() {
	Node* current = head;
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		while (current != NULL) {
			cout << current->value << '\n';
			current = current->next;
		}
	}
}

int main() {
	cout << "-------- Integer Linked List Modifier --------\n";
	char decision;
	cout << "Insert or append? (i/a) ";
	cin >> decision;
	switch (decision) {
	case 'i': {
		cout << "Items amount: ";
		int s, item_s;
		cin >> s;
		for (int i = 0; i < s; i++) {
			cout << "Item " << i + 1 << ": ";
			cin >> item_s;
			add_front(item_s);
		}
		break;
	}
	case 'a': {
		cout << "Items amount: ";
		int a, item_a;
		cin >> a;
		for (int i = 0; i < a; i++) {
			cout << "Item " << i + 1 << ": ";
			cin >> item_a;
			add_end(item_a);
		}
		break;
	}
	default: cout << "Invalid\n";
		return 0;
	}
	cout << "\n------------------\nList:\n";
	display();

	char adjustments;
	while (true) {
		cout << "\nAdjustments? (y/n) ";
		cin >> adjustments;
		switch (adjustments) {
		case 'y': {
			char decision;
			cout << "Choose an adjustment: \'r\'emove-\'i\'nsert-\'a\'ppend: ";
			cin >> decision;
			switch (decision) {
			case 'r': {
				//if (head == NULL) {
				//    cout << "Already empty.";
				//    return 0;
				//}

				int item_delete;
				cout << "\nRemove item (enter the value): ";
				cin >> item_delete;
				remove(item_delete);

				if (green_light) {
					cout << "\n------------------\nList after adjustments:\n";
					display();
				}
				break;
			}
			case 'i': {
				int item_insert;
				cout << "\nItem (inserting): ";
				cin >> item_insert;
				add_front(item_insert);
				cout << "\n------------------\nList after adjustments:\n";
				display();
				break;
			}
			case 'a': {
				int item_append;
				cout << "\nItem (appending): ";
				cin >> item_append;
				add_end(item_append);
				cout << "\n------------------\nList after adjustments:\n";
				display();
				break;
			}
			default: cout << "Invalid";
				return 0;

			}
			break;
		}
		case 'n': {
			return 0;
		}
		default: {
			cout << "Invalid\n";
			return 0;
		}
		}
	}
	return 0;
}