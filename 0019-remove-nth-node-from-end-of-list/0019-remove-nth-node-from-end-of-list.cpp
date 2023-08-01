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
        int len = 0;
        ListNode*curr=head;
        while (curr != NULL) {
            len++;
            curr = curr->next;
        }
        if(len<n){
            return head;
        }
        curr = head;
        
        for(int i=1;i<len-n;i++){
            curr=curr->next;
        }
        if(len==n){
            head=head->next;
        }
        else{
        curr->next = curr->next->next;
        }
        return head;
    }
};