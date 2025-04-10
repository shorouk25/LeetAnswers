/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        ListNode *current = head;
        ListNode *prev = nullptr;
    
        while(current != nullptr){
           ListNode *next_node = current->next;
           current->next = prev;
           prev = current;
           current = next_node;
        }
        return prev;
    }
};