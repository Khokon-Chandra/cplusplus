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

   
    
    ListNode *reverse(ListNode* head)
    {
        ListNode* temp = head;
        ListNode* current = head;
        ListNode* prev    = NULL;
        ListNode* next;

        if(head == NULL){
            return NULL;
        }

        while(current){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }


    bool isPalindrome(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast and fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        slow = this->reverse(slow);
        
        while(slow){
            if(slow->val != head->val) return false;
            slow = slow->next;
            head = head->next;
        }

        return true;
    }

};

int main()
{
    Solution solution;
    ListNode *head = new ListNode(1);
    solution.insert(head, 2);
    solution.insert(head, 3);
    solution.insert(head, 3);
    solution.insert(head, 2);
    solution.insert(head, 1);
    // solution.display(head);
    bool isPalindrome = solution.isPalindrome(head);

    cout << "This palindrom=" << isPalindrome << endl;
  
    return 0;
}