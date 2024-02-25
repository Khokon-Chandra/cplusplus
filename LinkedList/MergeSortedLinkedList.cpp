#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    void insert(ListNode *head, int val)
    {
        ListNode *node = new ListNode(val);
        if (head == NULL)
        {
            head = node;
        }

        ListNode *current = head;

        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = node;
    }

    void display(ListNode *head)
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << endl;
    }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *dummy = new ListNode(0);

        ListNode *temp = dummy;

        while (list1 and list2)
        {
            if (list1->val <= list2->val)
            {
                temp->next = list1;
                list1 = list1->next;
            }
            else
            {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        temp->next = list1 ? list1 : list2;

        return dummy->next;
    }
};

int main()
{
    Solution solution;
    ListNode *head = new ListNode(1);
    solution.insert(head, 2);
    solution.insert(head, 4);

    ListNode *head1 = new ListNode(1);
    solution.insert(head1, 3);
    solution.insert(head1, 4);

    ListNode *sortedList = solution.mergeTwoLists(head, head1);

    solution.display(sortedList);

    return 0;
}