 #include <iostream>
 // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow, *fast = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        } 
        return slow;
    }
};

/*
In this question, we have to find the middle of the LinkedList
If the total number of elements are even, we return the next number
1 -> 2 -> 3 -> 4 -> 5
The above ans should be 3
1 -> 2 -> 3 -> 4 -> 5 -> 6
The above should return 4

To solve this problem, we take two pointer fast & slow, by following 
the logic that when fast it at n slow will be at n/2
so, fast jumps by 2 places where as slow by one
*/