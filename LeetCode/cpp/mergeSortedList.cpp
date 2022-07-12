#include "iostream"
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        else if (list2==NULL)
            return list1;
        ListNode *head;
        ListNode *tail;
        if(list1->val <= list2->val)
        {
            head=tail=list1;
            list1=list1->next;
        }
        else
        {
            head=tail=list2;
            list2=list2->next;
        }
        while(list1!=NULL && list2!= NULL)
        {
            if(list1->val <= list2->val)
            {
                tail->next=list1;
                tail=list1;
                list1=list1->next;
            }
            else
            {
                tail->next=list2;
                tail=list2;
                list2=list2->next;
            }
        }
        if(list1==NULL)
        {
            tail->next=list2;
        }
        else
        {
            tail->next=list1;
        }
        return head;
    }


