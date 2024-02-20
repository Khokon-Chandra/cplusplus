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

    ListNode *swapPairs(ListNode *head)
    {
        ListNode *dummy = new ListNode();
        dummy->next = head;
        ListNode *curr = dummy;
        
        // 0  1  2  3
        while (curr and curr->next)
        {
            ListNode *s1 = curr->next;       // 1->2->3
            ListNode *s2 = curr->next->next; // 2->3

            if(!s2) break;
            
            s1->next = s2->next; // 1->3
            s2->next = s1;       // 2->1->3

            curr->next = s2;
            curr = s1;
        }
        return dummy->next;
    }
};

int main()
{
    Solution solution;
    ListNode *head = new ListNode(1);
    solution.insert(head, 2);
    solution.insert(head, 3);
    solution.insert(head, 4);

    ListNode *pairs = solution.swapPairs(head);

    solution.display(pairs);

    return 0;
}