#include "mergeksortedlist.hpp"
using namespace std;
/**
 * Definition for singly-linked list.
 */
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() <= 0)
        return NULL;
        if(lists.size() < 2)
        return lists[0];

        unsigned int half = lists.size()/2;

        vector<ListNode*> lefts(lists.begin(), lists.begin() + half); //but new definition method cost and delay too much
        vector<ListNode*> rights(lists.begin() + half, lists.end());

        ListNode* left = mergeKLists(lefts);
        ListNode* right = mergeKLists(rights);

        return merge2(left, right);
    }

    ListNode* merge2(ListNode* l1, ListNode* l2)
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
        {
            return l1;
        }

        if(l2 != NULL)
        {
            return l2;
        }
        return NULL;
    }
};