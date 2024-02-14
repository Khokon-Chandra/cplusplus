#include<iostream>
using namespace std;


class Node {
  public:
	int val;
	Node* next;

	Node(int v) {
		this->val = v;
		next = NULL;
	}
};


class LinkedList {
  public:

	Node* head;

	LinkedList() {
		head=NULL;
	}

	void insert(int val) {
		Node* node = new Node(val);
		node->next = head;
		head = node;
	}


	void reverse() {
		Node* current = head;
		Node* prev    = NULL;
		Node* next    = NULL;

		while(current != NULL) {
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;

	}


	void display() {
		Node* current = head;

		while(current != NULL) {
			cout << current->val <<endl;
			current = current->next;
		}


	}

};


int main() {

	LinkedList list;

	list.insert(1);
	list.insert(2);
	list.insert(3);
	list.insert(4);
	list.insert(5);
	list.display();
	cout << "reverse" <<endl;
	list.reverse();
	list.display();

	return 0;
}
