/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return NULL;
        }
        unordered_set<ListNode*> st;
        // ListNode* curr = head;
        while(head!=NULL){
            if(st.find(head)!=st.end()){ // if node is found
                return head;
            }
            else{
                st.insert(head);
            }
            head = head->next;
        }
        return NULL;
    }
};