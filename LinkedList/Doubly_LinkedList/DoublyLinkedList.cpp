#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node()
    {
        this->val  = 0;
        this->next = NULL;
        this->prev = NULL;
    }

    Node(int val, Node *head)
    {
        this->val  = val;
        this->next = head;
        this->prev = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    // insertAtTail(int val, )
};

int main()
{

    return 0;
}