// Definition for singly-linked list.
#include "stdio.h"
 struct ListNode {
      int val;
      struct ListNode *next;
 };
 

struct ListNode* merge2(struct ListNode* l1, struct ListNode* l2)
{
    if(l1 != NULL && l2 != NULL)
    {
        if(l1->val < l2->val)
        {
            l1->next = merge2(l1->next, l2);
            return l1;
        }
        else
        {
            l2->next = merge2(l2->next, l1);
            return l2;
        }
    }

    if(l1 != NULL)
    return l1;

    if(l2 != NULL)
    return l2;

    return NULL;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize){
    if(listsSize <= 0) 
    return NULL;
    if(listsSize < 2)
    return lists[0];

    struct ListNode* left;
    struct ListNode* right;
    int leftSize = listsSize/2;
    left = mergeKLists(lists,leftSize);
    right = mergeKLists(lists + leftSize,listsSize - leftSize); //notice for how to locate the indicated index list

    return merge2(left,right);
}