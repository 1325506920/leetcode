//
//  Add Two Numbers.c
//  leetcode
//
//  Created by 龙柯杉 on 2019/3/25.
//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
 You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 
 You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 
 Example:
 
 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
 Explanation: 342 + 465 = 807.
 */
class Solution {
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL and l2 == NULL) return NULL;
        else if (l1 == NULL) return l2;
        else if (l2 == NULL) return l1;
        
        int a = l1->val + l2->val;
        ListNode *p = new ListNode(a % 10);
        p->next = addTwoNumbers(l1->next,l2->next);
        if (a >= 10) p->next = addTwoNumbers(p->next, new ListNode(1));
        return p;
    }
};
