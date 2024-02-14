#include<iostream>
using namespace std;


class Node {
  public:
	int val;
	Node* next;
	Node(int value) {
		this->val = value;
		this->next = NULL;
	}
};


class LinkedList {
  public:
	Node* head;

	LinkedList(){
		head = NULL;
	}

	void insertNode(int val){
		Node* n = new Node(val);
		if(head == NULL){
			head = n;
		}else{

			Node* current = head;
			while(current->next != NULL){
				current = current->next;
			}
			current->next = n;
		}
	}


	void reverseNode(){
		Node* current = head;
		Node *prev = NULL;
		Node *next = NULL;

		while(current != NULL){
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;
	}


	void displayNode(){

		Node* current = head;

		while(current->next != NULL){
			cout << current->val <<endl;
			current = current->next;
		}
		cout << current->val << endl;

	}


};




int main() {

	LinkedList list;

	list.insertNode(1);
	list.insertNode(2);
	list.insertNode(3);
	list.insertNode(4);

	//list.reverseNode();

	list.displayNode();

	return 0;
}
