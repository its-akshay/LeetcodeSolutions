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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*curr = head;
        int count = 0;
        if(head->next==NULL){
            return NULL;
        }
        ListNode*slow = head;
        ListNode*fast = head;
        while(slow!=NULL){
            slow= slow->next;
            count++;
        }
        int mid = count/2;
        for(int i=1;i<mid;i++){
            fast = fast->next;
        }
        fast->next = fast->next->next;
        return head;
    }
};