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
    int lengthOfLinkedlist(ListNode *head)
    {
        ListNode *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }



    void insert(ListNode* head, int val){
        ListNode* node = new ListNode(val);
        if(head == NULL){
            head = node;
        }

        ListNode* current = head;

        while(current->next != NULL){
            current = current->next;
        }
        current->next = node;
    }


    void display(ListNode* head){
        ListNode* temp = head;
        while(temp != NULL){
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << endl;
    }

    int length(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }

    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *current = head;
        ListNode *previous;
        int length = this->lengthOfLinkedlist(head) - n;

        while (length > 0)
        {
            previous = current;
            current = current->next;
            length--;
        }

        previous->next = current->next;

        return head;
    }
};



int main(){
    Solution solution;
    ListNode* head = new ListNode(1);
    solution.insert(head, 2);
    solution.insert(head,3);
    solution.insert(head,4);
    solution.insert(head,5);
    solution.display(head);
    cout << solution.length(head) <<endl;
    return 0;
}