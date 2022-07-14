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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;
        while(head != NULL && head->val == val)
            head = head->next;
        if(head == NULL) return head;
        ListNode* ptr =head;
        ListNode* nxtptr = head->next;
        while(nxtptr!= NULL){
            while(nxtptr != NULL && nxtptr->val == val)
                nxtptr = nxtptr->next;
            ptr->next = nxtptr;
            ptr = ptr->next;
            if(nxtptr == NULL) break;
            nxtptr = nxtptr->next;
        }
        return head;
    }
};