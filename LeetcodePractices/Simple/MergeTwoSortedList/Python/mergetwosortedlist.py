# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        if (l1 != None and l2 != None):
            if (l1.val < l2.val):
                l1.next = self.mergeTwoLists(l1.next, l2)           #python could not auto extend local scope, so need "self." to recognize the func in class definition
                return l1
            else:
                l2.next = self.mergeTwoLists(l2.next, l1)
                return l2
        if (l1 != None) :
            return l1
        if (l2 != None) :
            return l2