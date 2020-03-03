/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include "stdio.h"
 struct ListNode {
      int val;
      struct ListNode *next;
 };
 
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 !=NULL && l2 !=NULL)
    {
        if(l1->val < l2->val)                                               //pointer:"->", class:"."
        {
            l1->next =  mergeTwoLists(l1->next,l2);
            return l1;
        }
        else
        {
            l2->next = mergeTwoLists(l2->next, l1);
            return l2;
        }
    }

    if(l1 != NULL)
    {
        return l1;
    }

    if(l2 != NULL)
    {
        return l2;
    }

    return NULL;                                                            //need return for non-void function

}