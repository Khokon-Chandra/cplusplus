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

    ListNode *reverse(ListNode *head)
    {
        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *next;

        if (head == NULL)
        {
            return NULL;
        }

        while (current)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }

    ListNode *sort(ListNode *head)
    {
        ListNode *current = head;

        int prev;

        while (current)
        {

            ListNode *temp = head;

            while (temp)
            {
                if (current->val < temp->val)
                {
                    prev = current->val;
                    current->val = temp->val;
                    temp->val = prev;
                }

                cout << "curr = " << current->val << " temp=" << temp->val << endl;

                temp = temp->next;
            }

            current = current->next;
        }

        return head;
    }

    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *temp = list1;

        while (temp and temp->next)
            temp = temp->next;

        temp->next = list2;

        list1 = sort(list1);

        return list1;
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