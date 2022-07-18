#include "iostream"
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode* reverseList(ListNode* head) {
	ListNode* pre = NULL;
    ListNode* curr = head;
    ListNode* nex = head;
    
    while(curr){
        
        nex = nex->next;
        curr->next = pre;
        pre = curr;
        curr = nex;
        
    }
    
    return pre;
}

