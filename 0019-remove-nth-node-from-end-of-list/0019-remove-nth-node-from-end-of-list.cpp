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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* curr = head;
        while(curr != NULL){
            size++;
            curr = curr->next;
        }
        int k = size-n-1;
        if(n > size) return head;
        if(n == size){
            return head->next;
        }
        curr = head;
        while(k--){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
};