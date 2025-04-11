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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* midList = nullptr;
        ListNode* finalList = nullptr;

        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                ListNode* current1 = list1;
                list1 = list1->next;
                current1->next = midList;
                midList = current1;
            }

            else{
                ListNode* current2 = list2;
                list2 = list2->next;
                current2->next = midList;
                midList = current2;
            }
        }

        while(list1 != nullptr){
            ListNode* current1 = list1;
            list1 = list1->next;
            current1->next = midList;
            midList = current1; 
        }

        while(list2 != nullptr){
            ListNode* current2 = list2;
            list2 = list2->next;
            current2->next = midList;
            midList = current2;
        }

        while(midList != nullptr){
            ListNode* current = midList;
            midList = midList->next;
            current->next = finalList;
            finalList = current;
        }
        return finalList;
    }
};