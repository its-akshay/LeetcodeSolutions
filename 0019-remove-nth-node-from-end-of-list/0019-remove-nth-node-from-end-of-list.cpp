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
    ListNode* deleteHead(ListNode*head){
        if (head->next == NULL || head == NULL) {
		return NULL;
	    }
        ListNode*temp = head;
	    head = head->next;
	    delete temp;
	    return head;
    }
   
    int lengthOfLinkedList(ListNode*head){
        ListNode*temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == NULL || head == NULL) {
		return NULL;
	    }
        

        int len = lengthOfLinkedList(head);
        int k = len-n+1;

    if (k == 1) {
        head = deleteHead(head);
        return head;
    }
        
        ListNode*curr = head;
        ListNode*prev = NULL;
        int count = 0;
        while(curr!=NULL){
            count++;
            if(count==k){
                prev->next = prev->next->next;
                delete curr;
               break;
            }
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};

