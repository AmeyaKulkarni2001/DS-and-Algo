#include <iostream>

 // Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode;
        ListNode *pointer = dummy;
        for(int i = 1; i<n; i++){
            pointer = pointer -> next;
        }
        pointer -> next = pointer -> next -> next;
        return dummy -> next;
    }
};

