#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        this->val = x;
        this->next = NULL;
    }
    ListNode(int x, ListNode *next)
    {
        this->val = x;
        this->next = next;
    }
};

class Solution
{
private:
    int getDifference(ListNode *headA, ListNode *headB)
    {
        int length1 = 0;
        int length2 = 0;
        while (headA != NULL || headB != NULL)
        {
            if (headA != NULL)
            {
                length1++;
                headA = headA->next;
            }

            if (headB != NULL)
            {
                length2++;
                headB = headB->next;
            }
        }

        return length1 - length2;
    }

    void movePointer(ListNode *&headA, ListNode *&headB, int difference)
    {

        if (difference < 0)
        {
            while (difference++ != 0)
                headB = headB->next;
        }
        else
        {
            while (difference-- != 0)
                headA = headA->next;
        }
    }

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        int diff = this->getDifference(headA, headB);

        this->movePointer(headA, headB, diff);

        while (headA != NULL)
        {
            if (headA == headB)
            {
                return headA;
            }

            headA = headA->next;
            headB = headB->next;
        }

        return NULL;
    }

    void insertNode(ListNode *&head, int val)
    {
        ListNode *node = new ListNode(val);
        if (head == NULL)
        {
            head = node;
            return;
        }

        ListNode *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = node;
    }

    void printList(ListNode *head)
    {
        while (head->next != NULL)
        {
            cout << head->val << "->";
            head = head->next;
        }
        cout << head->val << endl;
    }
};

int main()
{
    Solution linkedlist;
    ListNode *head = NULL;

    linkedlist.insertNode(head, 1);
    linkedlist.insertNode(head, 3);
    linkedlist.insertNode(head, 1);
    linkedlist.insertNode(head, 2);
    linkedlist.insertNode(head, 4);

    ListNode *head1 = head;
    head = head->next->next->next;

    ListNode *headSecond = NULL;
    linkedlist.insertNode(headSecond, 3);
    headSecond->next = head;
    ListNode *head2 = headSecond;

    // linkedlist.printList(head1);
    // linkedlist.printList(head2);

    ListNode* result = linkedlist.getIntersectionNode(head1, head2);

    cout << "intersection=" << result->val << endl;

    return 0;
}