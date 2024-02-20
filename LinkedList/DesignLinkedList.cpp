#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int value)
    {
        this->val = value;
        this->next = NULL;
    }
};

class MyLinkedList
{
public:
    Node *head;

    MyLinkedList() { head = NULL; }

    int get(int index)
    {
        Node *temp = head;
        while (temp and index--)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            return -1;
        }
        return temp->val;
    }

    void addAtHead(int val)
    {
        Node *n = new Node(val);
        if (head == NULL)
            head = n;
        else
            n->next = head;
        head = n;
    }

    void addAtTail(int val)
    {

        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void addAtIndex(int index, int val)
    {
        Node *node = new Node(val);
        Node *next = NULL;

        if (head == NULL)
        {
            head = node;
        }
        else if(index == 0){
            node->next = head;
            head = node;
        }
        else
        {
            Node *temp = head;

            while (temp and --index)
            {
                temp = temp->next;
            }

            if (temp != NULL)
            {
                next = temp->next;
                node->next = next;
                temp->next = node;
            }
        }
    }

    void deleteAtIndex(int index)
    {
        Node *temp = head;
        if (index == 0)
        {
            head = head->next;
        }

        while (temp and --index)
        {
            temp = temp->next;
        }

        if (temp and temp->next)
        {
            temp->next = temp->next->next;
        }
    }

    void displayAll()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{

    MyLinkedList *obj = new MyLinkedList();
    obj->addAtIndex(0,10);
    obj->addAtIndex(0,20);
    obj->addAtIndex(1,30);
    obj->displayAll();
    cout << obj->get(0) << endl;

    return 0;
}
