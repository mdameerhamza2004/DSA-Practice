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
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast and fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(slow==fast) break;
        }
        if(fast == NULL or fast->next==NULL) return NULL;
        slow = head;
        while(slow!=fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
        
        
        // if(head == NULL){
        //     return NULL;
        // }
        // unordered_set<ListNode*> st;
        // ListNode* curr = head;
        // while(curr!=NULL){
        //     if(st.find(curr)!=st.end()){ // if node is found
        //         return curr;
        //     }
        //     else{
        //         st.insert(curr);
        //     }
        //     curr = curr->next;
        // }
        // return NULL;
    }
};